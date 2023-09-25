#include "main.h"
/**
 * set_string - Sets the value of a pointer to a char.
 *
 * @s: Pointer to a pointer to char (double pointer).
 * @to: Pointer to the string to set the pointer to.
 *
 * Description:
 * This function takes a double pointer to char (char **) and sets the value of
 * the pointer 's' to the address of the string pointed to by 'to'. It allows
 * you to change where the original pointer 's' is pointing to.
 */
void set_string(char **s, char *to)
{
*s = to;
}

