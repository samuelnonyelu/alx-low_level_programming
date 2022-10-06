#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * _calloc - works like calloc function (man calloc)
 * @nmemb: n no of elements to be allocated for
 * @size: size of bytes to be allocated
 *
 * Return: void
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *arr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	arr = malloc(nmemb * size);

	if (arr == NULL)
		return (NULL);
	else if (arr != NULL)
		memset(arr, 0, nmemb * size);

	return (arr);
}
