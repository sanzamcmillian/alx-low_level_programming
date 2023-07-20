#include "function_pointers.h"

/**
 *int_index - searches for an integer
 *@*array: the list of integers
 *@size: size of the array
 *@*cmp: function pointer to be used
 *
 *Return: -1(for no matches), any int otherwise
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;
	int ans;

	if (size <= 0)
	{
		return (-1);
	}
	for (i = 0; i < size; i++)
	{
		ans = (*cmp)(array[i]);
		if (ans > 0)
		{
			return (i);
		}
	}
	return (-1);
}
