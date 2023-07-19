#include <stdio.h>
#include <stdlib.h>
#include "3-calc.h"

/**
 * op_add - sum of two numbers.
 *@num1:number 1
 *@num2:number 2
 *
 * Return: an integer
 */
int op_add(int num1, int num2)
{
	return (num1 + num2);
}

/**
* op_sub - difference between two numbers.
*@num1:number 1
*@num2:number 2
*
* Return: an integer
*/
int op_sub(int num1, int num2)
{
	return (num1 - num2);
}

/**
* op_mul - Returns the multiplication of two numbers.
*@num1:number 1
*@num2:number 2
*
* Return: an integer
*/
int op_mul(int num1, int num2)
{
	return (num1 * num2);
}
/**
* op_div - Returns the division of two numbers.
*@num1:number 1
*@num2:number 2
*
* Return: an integer
*/
int op_div(int num1, int num2)
{
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (num1 / num2);
}

/**
* op_mod - Returns the remainder of the division of two numbers.
*@num1:number 1
*@num2:number 2
*
* Return: an integer
*/
int op_mod(int num1, int num2)
{
	if (num2 == 0)
	{
		printf("Error\n");
		exit(100);
	}
	return (num1 % num2);
}
