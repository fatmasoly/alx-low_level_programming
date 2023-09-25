#include "main.h"
#include <stdio.h>
/**
 * print_diagsums - Prints the sum of the main diagonal and other diagonal
 *                 of a square matrix of integers.
 *
 * @a: Pointer to a one-dimensional array representing the square matrix.
 * @size: Size of the square matrix (number of rows or columns).
 *
 * Description:
 * This function calculates and prints the sums of the main diagonal (from
 * top-left to bottom-right) and the other diagonal (from top-right to
 * bottom-left) of a square matrix of integers. It uses appropriate indices
 * to efficiently access the diagonal elements without explicitly traversing
 * the entire matrix.
 *
 * Format:
 * The function prints the sums in the following format:
 * "Sum of the main diagonal: [sum1], Sum of the other diagonal: [sum2]\n"
 * Where [sum1] is the sum of the main diagonal, and [sum2] is the sum of the
 * other diagonal.
 */

void print_diagsums(int *a, int size)
{
int i;
int sum1 = 0;
int sum2 = 0;
for (i = 0 ; i < size ; i++)
{
sum1 += a[i * size + i];
sum2 += a[i * size + (size - 1 - i)];
}
printf("%d, %d\n", sum1, sum2);
}

