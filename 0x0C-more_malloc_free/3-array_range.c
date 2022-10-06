#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
/**
 * array_range - creates an array of integers from a range
 * @min: minimum number to start from (including itself)
 * @max: final number including itself
 *
 * Return: pointer to the array
 */
int *array_range(int min, int max)
{
	int *arr, i;

	if (min > max)
		return (NULL);

	arr = malloc((max - min + 1) * sizeof(*arr));
	if (arr == NULL)
		return (NULL);

	while (min <= max)
	{
		arr[i] = min;
		i++;
		min++;
	}

	return (arr);
}
