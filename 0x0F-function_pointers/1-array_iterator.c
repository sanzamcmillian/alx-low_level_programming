#include "function_pointers.h"

/**
 *array_iterator - executes a function given as a parameter on each element of an array
 *@array: list of numbers
 *@size: size of the array
 *@action: the function to be executed
 *
 *Return: Nothing
 */

void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned long i = 0;

	for (i = 0; i < size; i++)
	{
		(*action)(array[i]);
	}
}
