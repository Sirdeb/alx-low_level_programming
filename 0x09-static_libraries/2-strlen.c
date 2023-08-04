#include "main.h"
/**
 * _strlen - to return the length of a string
 * @a: string
 * Return: len
 */
int _strlen(char *a)
{
	int longi = 0;

	while (*a != '\0')
	{
		longi++;
		a++;
	}

	return (longi);
}
