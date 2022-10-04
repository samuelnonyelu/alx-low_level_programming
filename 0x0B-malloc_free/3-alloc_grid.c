#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - function that returns a pointer to a 2d array of integers
 * @width: columns
 * @height: rows
 *
 * Return: pointer to array;
 */
int **alloc_grid(int width, int height)
{
	int **ar, i = 0, j = 0;

	if (width < 1 || height < 1)
		return (NULL);

	ar = malloc(height * sizeof(int));

	if (ar == NULL)
	{
		free(ar);
		return (NULL);
	}

	for (; i < height; i++)
	{
		ar[i] = malloc(width * sizeof(int));
		if (ar[i] == NULL)
		{
			return (NULL);
		}
	}

	for (i = 0; i < height; i++)
	{
		for (; j < width; j++)
		{
			ar[i][j] = 0;
		}
	}

	return (ar);
}
