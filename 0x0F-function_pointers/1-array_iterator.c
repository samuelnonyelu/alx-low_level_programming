#include "function_pointers.h"
#include <stddef.h>
/**
 * array_iterator - loops through an array to print it's values in int and hex
 * @array: the array passed into the function
 * @size: size of array
 * @action: function pointer
 *
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}
