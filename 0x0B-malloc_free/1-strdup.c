#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * _strdup - copies a string that's stored in a pointer, similar to strdup
 * @str: string to be copied
 *
 * Return: pointer to copied string
 */
char *_strdup(char *str)
{
	char *_ar;
	size_t i;

	if (str == NULL)
	{
		return (NULL);
	}
	_ar = malloc((strlen(str) * sizeof(*_ar)) - 1);

	if (_ar == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < strlen(str); i++)
	{
		_ar[i] = str[i];
	}

	return (_ar);
}
