#include "main.h"
/**
 * file_err - Handle file errors and exit accordingly.
 *
 * @file_to: File descriptor for the destination file.
 * @file_from: File descriptor for the source file.
 * @argv: Array of program arguments.
 */
void file_err(int file_to, int file_from, char *argv[])
{
if (file_from == -1)
{
dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
exit(98);
}
if (file_to == -1)
{
dprintf(STDERR_FILENO, "Error: Can't write to file %s\n", argv[2]);
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
int file_to, file_from, close_err;
ssize_t written, c;
char buff[1024];
if (argc != 3)
{
dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
exit(97);
}
file_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
file_from = open(argv[1], O_RDONLY);
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
close_err = close(file_from);
if (close_err == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from);
exit(100);
}
close_err = close(file_to);
if (close_err == -1)
{
dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to);
exit(100);
}
return (0);
}

