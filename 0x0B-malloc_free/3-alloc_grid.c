#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - that nests a loop to make grid
 * @w: width
 * @h: height
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int w, int h)
{
	int **mee;
	int i, j;

	if (w <= 0 || h <= 0)
		return (NULL);

	mee = malloc(sizeof(int *) * h);

	if (mee == NULL)
		return (NULL);

	for (i = 0; i < h; i++)
	{
		mee[i] = malloc(sizeof(int) * w);

		if (mee[i] == NULL)
		{
			for (; i >= 0; i--)
				free(mee[i]);

			free(mee);
			return (NULL);
		}
	}

	for (i = 0; i < h; i++)
	{
		for (j = 0; j < w; j++)
			mee[i][j] = 0;
	}

	return (mee);
}
