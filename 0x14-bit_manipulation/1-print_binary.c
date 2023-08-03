#include "main.h"
#include <stdio.h>

/**
 *print_binary - prints the binary representation of a number.
 *@n: number to be printed out as binary
 */

void print_binary(unsigned long int n)
{
	int i;
	int count = 0;
	unsigned long int current;

	for (i = 63; i >= 0; i--)
	{
		current = n >> i;

		if (current & 1)
		{
			putchar('1');
			count++;
		}
		else if (count)
		{
			putchar('0');
		}
	}
	if (!count)
	{
		putchar('0');
	}
}
