#include "main.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * create_array - creates an array of the same characters
 * @size: size of the array
 * @c: the characters to initialize the array to
 *
 * Return: pointer to the array
 */
char *create_array(unsigned int size, char c)
{
	char *_array;
	unsigned int i;

	_array = malloc(size * sizeof(*_array));

	if (size == 0)
		return (NULL);
	if (_array == 0)
		return (NULL);
	for (i = 0; i < size; i++)
		_array[i] = c;

	return (_array);
}
