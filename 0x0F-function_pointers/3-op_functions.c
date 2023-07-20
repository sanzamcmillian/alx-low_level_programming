#include <stdlib.h>
#include "function_pointers.h"

/**
 *op_add - adds to integers
 *@a: first int
 *@b: second int
 *Return: sum of a and b
 */

int op_add(int a, int b)
{
	return (a + b);
}

/**
 *op_sub - substracts integers
 *@a: first int
 *@b: second int
 *Return: the difference of a and b
 */

int op_sub(int a, int b)
{
	return (a - b);
}

/**
 *op_mul - multiplies two integers
 *@a: first int
 *@b: second int
 *Return: the product of a and b
 */

int op_mul(int a, int b)
{
	return(a * b);
}

/**
 *op_div - divides two integers
 *@a: first int
 *@b: second int
 *Return: division of a and b
 */

int op_div(int a, int b)
{
	return (a / b);
}

/**
 *op_mod - reminder of two integer division
 *@a: first int
 *@b: second int
 *Return: reminder from a and b division
 */
int op_mod(int a, int b)
{
	return (a % b);
}
