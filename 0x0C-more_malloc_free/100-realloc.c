#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <stddef.h>
#include <string.h>
#include <assert.h>
/**
 * _realloc - reallocates an area of memory previous allocated by malloc
 * @ptr: pointer to the area of memory
 * @old_size: previous size of memory
 * @new_size: new size of memory
 *
 * Return: void
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	void *newptr;

	if (ptr == NULL)
	{
		return (malloc(new_size));
	}
	else if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	else if (new_size <= old_size)
	{
		return (ptr);
	}
	else
	{
		assert((ptr) && (new_size > old_size));

		newptr = malloc(new_size);
		if (newptr)
		{
			memcpy(newptr, ptr, old_size);
			free(ptr);
		}

		return (newptr);
	}
}
