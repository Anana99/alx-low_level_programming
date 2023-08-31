#include <stdio.h>
#include "function_pointers.h"

/**
 * array_iterator - executes each element of array
 *@array:array
 *@size:size of array
 *@action:pointer to a function
 * Return: no return
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (action != NULL && array != NULL)
	{
		for (i = 0; i < size; i++)
			action(array[i]);
	}
}