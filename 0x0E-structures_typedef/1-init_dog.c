#include "dog.h"
/**
 * init_dog - Initializes a struct dog variable.
 * @d:     Pointer to the struct dog variable to initialize.
 * @name:  Pointer to a string representing the dog's name.
 * @age:   Age of the dog as a floating-point number.
 * @owner: Pointer to a string representing the owner's name.
 *
 * Description:
 * This function initializes a struct dog variable with the provided values
 * for name, age, and owner. If the pointer @d is NULL, it does nothing.
 */
void init_dog(struct dog *d, char *name, float age, char *owner)
{
if (d)
{
d->name = name;
d->age = age;
d->owner = owner;
}
}

