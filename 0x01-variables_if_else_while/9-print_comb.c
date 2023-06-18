#include <stdio.h>
/* more headers goes there */

/**
 * main - Entry point
 *
 *
 * Return: Always 0 (Sucess)
 */

int main(void)
{
	int n;

	for (n = 0; n <= 8; n++)
	{
		putchar('0' + n);
		putchar(',');
		putchar(' ');

	}
	putchar('9');
	return (0);
}
