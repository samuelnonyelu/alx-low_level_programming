#include "function_pointers.h"
#include <stddef.h>
/**
 * int_index - function searches for an integer
 * @array: array to search
 * @size: size of array
 * @cmp: function pointer
 *
 * Return: I just wanna sleep :'''(
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (size <= 0)
		return (-1);

	if (array == NULL || cmp == NULL)
		return (-1);

	for (i = 0; i < size; i++)
		if (cmp(array[i]))
			return (i);

	if (i == size)
		return (-1);

	return (-1);
}
