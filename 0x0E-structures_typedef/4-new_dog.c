#include <stdio.h>
#include <stdlib.h>
#include "dog.h"
/**
 * new_dog - struct creates a new dog
 * @name: string name
 * @age: float age
 * @owner: string owner
 *
 * Return: the dog
 */
dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *dog;

	dog = malloc(sizeof(dog_t));

	if (dog == NULL)
		return (NULL);

	dog->name = name;
	dog->age = age;
	dog->owner = owner;

	return (dog);
}
