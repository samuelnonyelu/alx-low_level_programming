#include "main.h"
/**
 * _strchr - man strchr
 * @s: string to check
 * @c: character to find
 *
 * Return: s
 */
char *_strchr(char *s, char c)
{
	while (*s != c)
	{
		s++;
	}
	return (s);
}
