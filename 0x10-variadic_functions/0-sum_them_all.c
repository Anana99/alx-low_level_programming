#include <stdio.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - Returns the sum of all its args.
 * @n: num of args
 * Return: result
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list valist;
	unsigned int sum;
	unsigned int i;

	sum = 0;
	va_start(valist, n);
	if (n == 0)
		return (0);
	for (i = 0; i < n; i++)
		sum += va_arg(valist, unsigned int);
	va_end(valist);
	return (sum);
}
