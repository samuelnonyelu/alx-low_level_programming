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
	unsigned int i, j;

	if (str == NULL)
		return (NULL);
	for (i = 0; str[i] != '\0'; i++)
		;
	_ar = malloc((i + 1) * sizeof(*_ar));

	if (_ar == NULL)
		return (NULL);
	for (j = 0; j <= i; j++)
		_ar[j] = str[j];

	return (_ar);
}
