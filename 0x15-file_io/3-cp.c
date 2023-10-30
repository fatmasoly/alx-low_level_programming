#include "main.h"
#include <stdio.h>

/**
 * file_err - Handle file errors and exit accordingly.
 *
 * @file_to: File descriptor for the destination file.
 * @file_from: File descriptor for the source file.
 * @argv: Array of program arguments.
 */
void file_err(int file_from, int file_to, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
exit(99);
}
}
/**
 * main - Copy the content of one file to another.
 *
 * @argc: Number of arguments.
 * @argv: Array of program arguments.
 *
 * Return: 0 on success, or specific exit codes on failure.
 */
int main(int argc, char *argv[])
{
int file_from, file_to, err_close;
ssize_t c, written;
char buff[1024];

if (argc != 3)
{
dprintf(STDERR_FILENO, "%s\n", "Usage: cp file_from file_to");
exit(97);
}
file_from = open(argv[1], O_RDONLY);
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC | O_APPEND, 0664);
file_err(file_from, file_to, argv);
c = 1024;
while (c == 1024)
{
c = read(file_from, buff, 1024);
if (c == -1)
file_err(-1, 0, argv);
written = write(file_to, buff, c);
if (written == -1)
file_err(0, -1, argv);
}
err_close = close(file_from);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
err_close = close(file_to);
if (err_close == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
return (0);
}

