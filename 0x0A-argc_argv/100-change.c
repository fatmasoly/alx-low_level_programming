#include <stdio.h>
#include <stdlib.h>
/**
 * calculateCoins - Calculate the minimum number of coins for a denomination
 * @cents: The remaining cents to make change for
 * @denomination: The denomination of the coin being considered
 *
 * Description:
 * This function calculates the minimum number of coins of a specific
 * denomination required to make change for the given amount of cents.
 *
 * Return:
 * The number of coins of the specified denomination required.
 */
int calculateCoins(int cents, int denomination)
{
int coin_count = 0;

while (cents >= denomination)
{
coin_count++;
cents -= denomination;
}
return (coin_count);
}
/**
 * main - Entry point of the program
 * @argc: The number of command-line arguments (including the program name)
 * @argv: An array of strings containing the command-line arguments
 *
 * Description:
 * This program calculates the minimum number of coins needed to make change
 * for a given amount of money in cents. It takes a single command-line
 * argument representing the amount in cents and performs the following:
 *
 * - If there are not exactly 1 argument, it prints "Error" and returns 1.
 * - If the argument is negative, it prints "0" and returns 0.
 * - It calculates the minimum number of coins required using coin values of
 *   25, 10, 5, 2, and 1 cent.
 * - It counts the number of each type of coin used.
 * - It prints the total minimum number of coins required.
 *
 * Return:
 * - 0 for success (valid arguments and sum calculated)
 * - 1 for an error (invalid arguments or incorrect input)
 */
int main(int argc, char *argv[])
{
int coins[] = {25, 10, 5, 2, 1};
int cents;
int i;
int total_coins = 0;
if (argc != 2)
{
printf("Error\n");
return (1);
}
cents = atoi(argv[1]);
if (cents < 0)
{
printf("0\n");
return (0);
}
for (i = 0; i < 5; i++)
{
total_coins += calculateCoins(cents, coins[i]);
cents %= coins[i];
}
printf("%d\n", total_coins);
return (0);
}

