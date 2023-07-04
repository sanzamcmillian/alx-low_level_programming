#include "main.h"

/**
 *_memset - changes the output for simple_print_buffer
 *@s first parameter that is deferenced
 *@b constant parameter
 *@n the counter
 *Return: s.
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
