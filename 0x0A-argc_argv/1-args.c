#include "main.h"
#include <stdio.h>

/**
 *main - print the number of agruments passed in
 *
 *@argc: number of arguments passed in
 *@argv: array of arguments
 *Return: Always 0
 */

int main(int argc, char *argv[])
{

	if (argv[argc - 1] == argv[0])
	{
		printf("%d\n", 0);
	}
	else
	{
		printf("%d\n", argc - 1);
	}
	return (0);
}
