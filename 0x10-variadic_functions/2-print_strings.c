#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings -print strings
 *@separator: The string to be printed between strings.
 *@n:number of arguments
 * Return: the sum of the arguments
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	va_list Anana;
	unsigned int j;
	char *q;
	char array[] = "(nil)";

	va_start(Anana, n);
	for (j = 0; j < n; j++)
	{
		q = va_arg(Anana, char *);
		if (q == NULL)
			q = array;
		if (j != (n - 1) && separator != NULL)
		{
			printf("%s%s", q, separator);
		} else
		{
			printf("%s", q);
		}
	}
	printf("\n");
	va_end(Anana);
}
