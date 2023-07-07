#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 *whatsmyname - prints its name
 *
 *@argc: number of commands
 *@argv: strings in the program
 *Return: Always 0
 */

int main(int argc, char* argv[])
{
	printf("%s\n",argv[argc - 1]);
	return (0);

}
