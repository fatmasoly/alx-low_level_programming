#include <stdio.h>
/**
 * main - Point
 *
 * Description: A C program that prints with puts function
 *
 * Return: Always 0 (success)
*/

int main(void){
int i;
char letter = 'a';
for(i=0;i<26;i++)
{ 
putchar(letter);
letter++;
}
putchar('\n');

return (0);

}
