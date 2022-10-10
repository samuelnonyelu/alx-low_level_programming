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
	dog_t *new_dog;
	char *name_cpy, *owner_cpy;
	int name_len = 0, owner_len = 0, i;

	if (name == NULL || owner == NULL)
		return (NULL);
	while (name[name_len])
		name_len++;
	while (owner[owner_len])
		owner_len++;
	new_dog = malloc(sizeof(dog_t));
	if (new_dog == NULL)
	{
		free(new_dog);
		return (NULL);
	}

	name_cpy = malloc(name_len + 1);
	if (name_cpy == NULL)
	{
		free(name_cpy);
		return (NULL);
	}
	for (i = 0; name[i]; i++)
		name_cpy[i] = name[i];
	name_cpy[i] = '\0';
	owner_cpy = malloc(owner_len + 1);
	if (owner_cpy == NULL)
	{
		free(owner_cpy);
		return (NULL);
	}
	for (i = 0; owner[i]; i++)
		owner_cpy[i] = owner[i];
	owner_cpy[i] = '\0';
	new_dog->name = name_cpy;
	new_dog->age = age;
	new_dog->owner = owner_cpy;
	return (new_dog);
}
