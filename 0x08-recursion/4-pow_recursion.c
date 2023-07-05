#include "main.h"

/**
 *_pow_recursion - returns x raised to the power of y
 *
 *@x: base
 *@y: power
 *Return: -1(y lower than zero), 1(if y is zero) and results otherwise
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
	{
		return (-1);
	}
	else if (y == 0)
	{
		return (1);
	}
	else
	{
		return (x * _pow_recursion(x, y - 1));
	}
}
