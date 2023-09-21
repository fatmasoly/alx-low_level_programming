#include "main.h"
#include <stdio.h>

/**
 * print_buffer - Prints the content of a buffer in a specified format.
 * @b: Pointer to the buffer.
 * @size: Size (in bytes) of the buffer.
 *
 * Description:
 * This function prints the contents of the buffer pointed to by 'b' in a
 * formatted manner. The output displays 10 bytes per line, showing both the
 * hexadecimal values and their corresponding ASCII representations. Each line
 * starts with the position of the first byte in hexadecimal, followed by a
 * colon and space. Then, it displays the hexadecimal values of the buffer's
 * contents, separated by spaces, and the ASCII representation of each byte.
 * If a byte is not a printable ASCII character (outside the range of 32-126),
 *
 * Example output:
 * 00000000: 5468 6973 2069 7320 6120 This is a
 * 0000000a: 7374 7269 6e67 2100 416e string!.An
 * 00000014: 6420 7468 6973 2069 7320 d this is
 * 0000001e: 7468 6520 7265 7374 206f the rest o
 * 00000028: 6620 7468 6520 2362 7566 f the #buf
 * 00000032: 6665 7220 3a29 0102 0304 fer :)....
 * 0000003c: 0506 0723 6369 7366 756e ...#cisfun
 * 00000046: 0a00 0000 0000 0000 0000 ..........
 * 00000050: 0000 0000 0000 0000 0000 ..........
 * 0000005a: 2021 3456 2370 6f69 6e74  !4V#point
 * 00000064: 6572 7361 7265 6675 6e20 ersarefun
 * 0000006e: 2369 6e66 6572 6e75 6d69 #infernumi
 * 00000078: 7366 756e 0a00           sfun..
 */
void print_buffer(char *b, int size)
{
int o, j, i;
o = 0;
if (size <= 0)
{
printf("\n");
return;
}
while (o < size)
{
j = size - o < 10 ? size - o : 10;
printf("%08x: ", o);
for (i = 0; i < 10; i++)
{
if (i < j)
printf("%02x", *(b + o + i));
else
printf("  ");
if (i % 2)
{
printf(" ");
}
}
for (i = 0; i < j; i++)
{
int c = *(b + o + i);
if (c < 32 || c > 132)
{
c = '.';
}
printf("%c", c);
}
printf("\n");
o += 10;
}
}

