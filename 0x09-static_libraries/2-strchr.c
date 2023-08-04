#include "main.h"
#include <stddef.h>

/**
 * _strchr - the entry point
 * @a: the input
 * @b: the input
 * Return: 0 Success
 */
char *_strchr(char *a, char b)
{
	int i = 0;

	for (; a[i] >= '\0'; i++)
	{
		if (a[i] == b)
			return (&a[i]);
	}
	return (0);
}
