#include <stdlib.h>
#include "main.h"
/**
 * malloc_checked - Allocates memory and checks for allocation success.
 * @b: The number of bytes to allocate.
 *
 * Description:
 * This function dynamically allocates memory for 'b' bytes using malloc.
 * If the allocation is successful, it returns a pointer to the allocated
 * memory. If malloc fails to allocate memory, it exits the program with
 * a status code of 98 to indicate a memory allocation error.
 *
 * Return:
 * - A pointer to the allocated memory if successful.
 * - Exits with status code 98 on memory allocation failure.
 */
void *malloc_checked(unsigned int b)
{
int *ptr = malloc(b);
if (ptr == NULL)
exit(98);
return (ptr);
}

