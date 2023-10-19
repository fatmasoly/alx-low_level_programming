#include "lists.h"

void __attribute__ ((constructor)) pre_main_function(void);
/**
 * pre_main_function - Function to execute before the main function.
 * Return :void
 */
void pre_main_function(void)
{
printf("You're beat! and yet, you must allow,\n"
"I bore my house upon my back!\n");
}

