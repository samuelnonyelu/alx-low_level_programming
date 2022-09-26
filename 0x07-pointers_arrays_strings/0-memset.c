#include "main.h"
/**
 * _memset - works like memset in-built (man memset)
 * @s: pointer to write to
 * @b: character to write
 * @n: number of characters to write
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	char *p = s;

	while (n--)
	{
		*p++ = (unsigned char)b;
	}
	return (s);
}
