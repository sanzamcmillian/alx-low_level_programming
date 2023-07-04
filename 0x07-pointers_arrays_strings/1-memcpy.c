#include "main.h"

/**
 *_memcpy - copies memory area
 *@dest: array with zeros to be modified
 *@src: array with natural numbers
 *@n:  constant ten
 *Returns: chararcters
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
