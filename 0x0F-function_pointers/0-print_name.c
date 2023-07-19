#include "function_pointers.h"
#include <stdlib.h>

/**
 * print_name - Print a name using pointer to a function
 *@name:name
 *@f:pointer to function
 *
 * Return: no return
 */
void print_name(char *name, void (*f)(char *))
{
	if (f != NULL)
		f(name);
}
