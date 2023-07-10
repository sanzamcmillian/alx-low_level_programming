#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 *main - multiplies two numbers
 *
 *@argc:  number of arguments
 *@argv:  array of arguments
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
