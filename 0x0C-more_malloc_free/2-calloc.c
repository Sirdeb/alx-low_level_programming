#include <stdlib.h>
#include "main.h"

/**
 * *_memset - that will fill a memory with a constant byte
 * @z: the memory area that is going to be filled
 * @f: character to be copied
 * @h: number of times f is going to be copied
 *
 * Return: pointer to memory area z
 */
char *_memset(char *z, char f, unsigned int h)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = f;
	}

	return (z);
}

/**
 * *_calloc - that is going to allocate memory for an array
 * @nm: the number of elements to be in the array
 * @s: the size of each element
 *
 * Return: the pointer to the allocated memory
 */
void *_calloc(unsigned int nm, unsigned int s)
{
	char *ptr;

	if (nm == 0 || s == 0)
		return (NULL);

	ptr = malloc(s * nm);

	if (ptr == NULL)
		return (NULL);

	_memset(ptr, 0, nm * s);

	return (ptr);
}
