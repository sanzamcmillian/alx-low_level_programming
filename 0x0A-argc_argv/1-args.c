#include "main.h"
#include <stdio.h>
#include <stdlib.h>

/**
 *args - number of agruments passed in
 *
 *@argc: number of commands passed in
 *@argv: strings passed in 
 *Return: always 0
 */

int main(int argc, char* argv[])
{

	if (argv[argc -1] == argv[0])
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
