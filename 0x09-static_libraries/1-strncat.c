#include "main.h"
/**
 * _strncat - it will concatenate two strings
 * using at most m bytes from src
 * @dest: the input value
 * @src: the input value
 * @m: the input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int m)
{
	int j;
	int k;

	j = 0;
	while (dest[j] != '\0')
	{
		j++;
	}
	k = 0;
	while (k < m && src[k] != '\0')
	{
	dest[j] = src[k];
	j++;
	k++;
	}
	dest[j] = '\0';
	return (dest);
}
