#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: array with zeros to be modified
 *@src: array with natural numbers
 *@n: last parameter with constant ten
 *
 *Returns: parameter
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = src[i];
		i++;
	}
	return (dest);
}
