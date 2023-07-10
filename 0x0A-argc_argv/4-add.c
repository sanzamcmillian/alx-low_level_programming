#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>
#include <string.h>

/**
 *check_num - checks if string is a digit
 *
 *@str:  array str
 *Return: 0(success)
 */

int check_num(char *str)
{
	unsigned int count;

	count = 0;
	while (count < strlen(str))
	{
		if (!isdigit(str[count]))
		{
			return (0);
		}
		count++;
	}
	return (1);
}
/**
 *main - adds positive numbers
 *
 *@argc:  number of commands
 *@argv:  strings received
 *Return: 0(success) and 1(failure)
 */

int main(int argc, char *argv[])
{
	int count;
	int str_to_int;
	int sum = 0;

	count = 1;
	while (count < argc)
	{
		if (check_num(argv[count]))
		{
			str_to_int = atoi(argv[count]);
			sum = sum + str_to_int;
		}
		else
		{
			printf("Error\n");
			return (1);
		}
		count++;
	}
	printf("%d\n", sum);
	return (0);
}
