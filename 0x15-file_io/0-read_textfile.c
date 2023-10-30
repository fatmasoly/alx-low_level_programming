#include "main.h"
/**
 * read_textfile - Read and print the contents of a file to standard output.
 *
 * @filename: The name of the file to read.
 * @letters: The number of letters to read and print.
 *
 * Return: The total number of characters printed, or 0 on failure.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
int fd;
char *buff;
ssize_t bytes_read;
ssize_t bytes_written;
if (filename == NULL)
return (0);
fd = open(filename, O_RDONLY);
if (fd == -1)
return (0);
buff = malloc(sizeof(char) * (letters));
if (buff == NULL)
return (0);
bytes_read = read(fd, buff, letters);
bytes_written = write(STDOUT_FILENO, buff, bytes_read);
close(fd);
free(buff);
return (bytes_written);
}

