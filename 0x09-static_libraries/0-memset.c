#include "main.h"
/**
 * _memset - it fills a block of memory with a specific value
 * @s: the starting address of memory to be filled
 * @a: desired value
 * @m: the number of bytes to be changed
 *
 * Return: changed array with new value for n bytes
 */
char *_memset(char *s, char a, unsigned int m)
{
	int i = 0;

	for (; m > 0; i++)
	{
		s[i] = a;
		m--;
	}
	return (s);
}
