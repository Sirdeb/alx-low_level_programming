#include "main.h"
/**
 * _strlen_recursion - it should return the length of a string.
 * @i: string to be measured.
 *
 * Return: len of the string.
 */
int _strlen_recursion(char *i)
{
	int longit = 0;

	if (*i)
	{
		longit++;
		longit += _strlen_recursion(i + 1);
	}

	return (longit);
}
