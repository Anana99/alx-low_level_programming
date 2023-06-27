#include "main.h"

/**
 * _strlen - Function that returns the length of a string
 *
 * @s: this is the input string
 *
 * Return: Length of the string
 */
int _strlen(char *s)
{
	int length;

	for (length = 0; s[length] != '\0' ; length++)
		;
	return (length);
}
