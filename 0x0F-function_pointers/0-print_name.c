#include "function_pointers.h"

/**
 *print_name - prints name using other functions
 *@name: name of the person
 *@*f: function as a parameter
 *
 *Return: Nothing
 */

void print_name(char *name, void (*f)(char *))
{
	(*f)(name);

}
