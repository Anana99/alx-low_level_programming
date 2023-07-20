#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - prints numbers, followed by a new line.
 * @separator: The string to be printed between numbers
 * @n: number of int
 * Return: ntg
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list valist;
	unsigned int j;

	va_start(valist, n);
	for (j = 0; j < n; j++)
	{
		if (j != (n - 1) && separator != NULL)
			printf("%d%s", va_arg(valist, unsigned int), separator);
		else
			printf("%d", va_arg(valist, unsigned int));
	}
	printf("\n");
	va_end(valist);
}
