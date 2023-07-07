#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 *args2 - multiples two numbers
 *
 *@argc:  number of commands
 *@argv:  strings received
 *Return: 0(success) and 1(failure)
 */

int main(int argc, char* argv[])
{
	int sum = 0;
	if (argc < 3 || argc > 4)
	{
		printf("Error\n");
		return (1);
	}
	sum  = atoi(argv[1]) * atoi(argv[2]);
	printf("%d\n", sum);
	return (0);
	
}
