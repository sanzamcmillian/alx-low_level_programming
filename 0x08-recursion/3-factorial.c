#include "main.h"

/**
 *factorial  - returns the factorial of a given number.
 *
 *@n: the number to be evaluated to a factorial
 *Return: n(SUCCESS), 0 and -1(negative n)
 */

int factorial(int n)
{
	if (n == 0)
	{
		return (1);
	}
	else if (n < 0)
	{
		return (-1);
	}
	else
	{
		return (n * factorial(n - 1));
	}
}
