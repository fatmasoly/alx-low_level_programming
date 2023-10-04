#include <stdio.h>
#include <stdlib.h>
#include "main.h"
#include <string.h>
/**
 * argstostr - Concatenates all command-line arguments into a single string.
 *
 * @ac: The argument count.
 * @av: An array of argument strings.
 *
 * Return: A pointer to the concatenated string, or NULL on failure.
 */
char *argstostr(int ac, char **av)
{
size_t tot_len = 0;
size_t current = 0;
int i;
char *ptr;
if (ac == 0 || av == NULL)
{
return (NULL);
}
for (i = 0 ; i < ac ; i++)
{
if (av[i] != NULL)
{
tot_len += strlen(av[i]) + 1;
}
}
ptr = malloc(tot_len + 1);
if (ptr == NULL)
{
return (NULL);
}
for (i = 0 ; i < ac ; i++)
{
if (av[i] != NULL)
{
strcpy(ptr + current, av[i]);
current += strlen(av[i]);
ptr[current] = '\n';
current++;
}
}
ptr[current] = '\0';
return (ptr);
}

