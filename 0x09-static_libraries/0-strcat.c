#include "main.h"
/**
 * _strcat - it concatenates two strings
 * @dest: the input value
 * @src: the input value
 *
 * Return: void
 */
char *_strcat(char *dest, char *src)
{
	int m;
	int k;

	m = 0;
	while (dest[m] != '\0')
	{
		m++;
	}
	k = 0;
	while (src[m] != '\0')
	{
		dest[m] = src[k];
		m++;
		k++;
	}

	dest[m] = '\0';
	return (dest);
}
