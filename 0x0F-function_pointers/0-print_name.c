#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - that will print the name using pointer to function
 * @name: the string to be add
 * @i: the pointer to a function
 * Return: nothing
 **/
void print_name(char *name, void (*i)(char *))
{
	if (name == NULL || i == NULL)
		return;

	i(name);
}
