#include "dog.h"
#include <stdio.h>
#include <stdlib.h>
/**
 * print_dog - prints the struct's members
 * @d: pointer to struct
 *
 * Return: void
 */
void print_dog(struct dog *d)
{
	if (d == NULL)
	{
		return;
	}
	(d->name != NULL) ? printf("Name: %s\n", d->name) : printf("Name: (nil)");
	printf("Age: %f\n", d->age);
	(d->owner != NULL) ? printf("Owner: %s\n", d->owner) : printf("Owner: (nil)");
}
