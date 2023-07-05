#include "main.h"

/**
 *_strlen_recursion - returns the length of a string
 *
 *@s: string to be counted
 *Return: length of string
 */

int _strlen_recursion(char *s)
{
	int i = 0;
	
	if (*s)
	{
		i = i + 1;
		s++;
		_strlen_recursion(s);
	}
	return (i);

}
