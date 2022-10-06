#include "main.h"
#include <stdlib.h>
#include <string.h>
#include <stddef.h>
/**
 * malloc_checked - function allocates memeory to arg
 * @b: int value of amount of memory to allot
 *
 * Return: void
 */
void *malloc_checked(unsigned int b)
{
	void *a;

	a = malloc(b);

	if (a == NULL)
	{
		exit(98);
	}

	return (a);
}
