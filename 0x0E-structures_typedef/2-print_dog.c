#include "dog.h"
#include <stdio.h>
/**
 * print_dog - Prints the details of a struct dog.
 * @d: Pointer to the struct dog variable to print.
 *
 * Description:
 * This function prints the name, age, and owner of a struct dog variable.
 * If any element of the struct is NULL, it prints "(nil)" instead.
 * If @d is NULL, the function does nothing.
 */
void print_dog(struct dog *d)
{
if (d)
{
printf("Name: %s\n", d->name ? d->name : "(nil)");
printf("Age: %.6f\n", d->age);
printf("Owner: %s\n", d->owner ? d->owner : "(nil)");
}
}

