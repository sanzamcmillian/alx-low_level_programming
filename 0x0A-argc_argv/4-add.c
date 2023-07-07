#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 *args2 - adds positive numbers
 *
 *@argc:  number of commands
 *@argv:  strings received
 *Return: 0(success) and 1(failure)
 */

int main(int argc, char* argv[])
{
	int i;
	int sum = 0;
	
	for (i = 0;i < argc;i++)
	{

		if (argc < 2)
		{
			printf("%d\n", 0);
		}
		else if (argv[i] >= "a" && argv[i] <= "z")
		{
			printf("Error\n");
			return (1);
		}
		sum += atoi(argv[i + 1]);
	}
	printf("%d\n", sum);
        return (0);
}
