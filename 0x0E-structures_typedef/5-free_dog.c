#include "dog.h"
#include <stdlib.h>
/**
 * free_dog - Frees memory associated with a dog.
 * @d: Pointer to a dog_t structure to free.
 *
 * Description:
 * This function releases the memory allocated for a dog, including the memory
 * for the 'name' and 'owner' strings and the dog structure itself. If 'd' is
 * NULL, the function does nothing.
 */
void free_dog(dog_t *d)
{
if (d == NULL)
{
return (NULL);
}
free(d->name);
free(d->owner);
free(d);
}

