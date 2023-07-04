#include "main.h"

/**
 *_memset - fills memory with constant byte
 *@s: first parameter that is deferenced
 *@b: constant parameter
 *@n: the counter
 *Return: s as a pointer
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		s[i] = b;
		i++;
	}
	return (s);
}
