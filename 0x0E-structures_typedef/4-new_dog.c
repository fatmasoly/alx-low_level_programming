#include "dog.h"
#include <stdlib.h>
#include <string.h>
/**
 * new_dog - Creates a new dog and initializes its properties.
 * @name:  Pointer to a string representing the dog's name.
 * @age:   Age of the dog as a floating-point number.
 * @owner: Pointer to a string representing the owner's name.
 *
 * Return: Pointer to new dog, or NULL if memory allocation fails.
 *
 * Description:
 * This function allocates memory for a new dog structure and copies the input
 * strings for the name and owner into the newly allocated memory. It also
 * initializes the age property. If memory allocation fails at any step, it
 * frees the previously allocated memory and returns NULL.
 */
dog_t *new_dog(char *name, float age, char *owner)
{
dog_t *new_dog;
new_dog = malloc(sizeof(dog_t));
if (new_dog == NULL)
{
return (NULL);
}
new_dog->name = strdup(name);
if (new_dog->name == NULL)
{
free(new_dog->name);
free(new_dog);
return (NULL);
}
new_dog->age = age;
new_dog->owner = strdup(owner);
if (new_dog->owner == NULL)
{
free(new_dog->owner);
free(new_dog);
return (NULL);
}
return (new_dog);
}

