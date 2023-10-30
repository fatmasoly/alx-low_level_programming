#include "main.h"
/**
 * append_text_to_file - Appends text to the end of a file.
 *
 * @filename: The name of the file to append to.
 * @text_content: The text to append to the file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
int fd;
ssize_t app = 0;
ssize_t len;
if (filename == NULL)
{
return (-1);
}
fd = open(filename, O_WRONLY | O_APPEND);
if (fd == -1)
{
return (-1);
}
len  = strlen(text_content);
if (len)
{
app = write(fd, text_content, len);
close(fd);
if (app != len)
return (-1);
if (app == len)
return (1);
}
return (-1);
}

