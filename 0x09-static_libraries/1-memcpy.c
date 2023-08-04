#include "main.h"
/**
 *_memcpy - is a function that copies memory area
 *@dest: memory will be stored
 *@src: memory whill be copied
 *@m: the number of bytes
 *
 *Return: copied memory with m byted changed
 */
char *_memcpy(char *dest, char *src, unsigned int m)
{
	int j = 0;
	int k = m;

	for (; j < k; j++)
	{
		dest[j] = src[j];
		m--;
	}
	return (dest);
}
