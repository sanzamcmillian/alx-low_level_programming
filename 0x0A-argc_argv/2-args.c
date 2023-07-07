#include <stdlib.h>
#include "main.h"
#include <stdio.h>

/**
 *args2 - prints all arguments received
 *
 *@argc:  number of commands
 *@argv:  strings received
 *Return: always 0
 */

int main(int argc, char* argv[])
{
	int i = 0;
	
	while ( i < argc)
	{
		printf("%s\n",argv[i]);
		i++;
	}
	return (0);
}
