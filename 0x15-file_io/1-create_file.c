#include "main.h"
/**
 * create_file - Create or truncate a file and write text content to it.
 *
 * @filename: The name of the file to create or truncate.
 * @text_content: The content to write to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
int fd;
int rw;
int letters;
if (filename == NULL)
return (-1);
fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
if (fd == -1)
return (-1);
if (!text_content)
text_content = "";
for (letters = 0 ; text_content[letters] ; letters++)
rw = write(fd, text_content, letters);
if (rw == -1)
return (-1);
close(fd);
return (1);
}

