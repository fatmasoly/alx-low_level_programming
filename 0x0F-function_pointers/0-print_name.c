#include "function_pointers.h"

/**
 * print_name - Calls a function to print a name.
 *
 * @name: The name to be printed.
 * @f: A function pointer to a name printing function.
 */
void print_name(char *name, void (*f)(char *))
{
	f(name);
}

