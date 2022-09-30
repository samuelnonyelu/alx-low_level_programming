#include "main.h"
#include <stddef.h>

/**
 * _strchr - man strcpy
 * @s: string
 * @c: character to find in s
 *
 * Return: pointer to c
 */
char *_strchr(char *s, char c)
{

	while (*s)
	{
		if (c == *s)
			return (s);
		s++;
	}
	if (c == *s)
		return (s);
	return (NULL);
}
