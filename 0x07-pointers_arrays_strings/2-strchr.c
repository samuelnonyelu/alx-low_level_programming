#include "main.h"
#include <stddef.h>
/**
 * _strchr - man strchr
 * @s: string to check
 * @c: character to find
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return ((char *) s);
		}
		s++;
	}
	return (NULL);
}
