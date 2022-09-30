#include "main.h"
#include <string.h>
/**
 * _strpbrk - google it
 * @s: string to be searched
 * @accept: strings to search in s
 *
 * Return: pointer to s result
 */
char *_strpbrk(char *s, char *accept)
{
	if ((s == NULL) || (accept == NULL))
	{
		return (NULL);
	}
	while (*s)
	{
		if (strchr(accept, *s))
		{
			return (s);
		}
		else
		{
			s++;
		}
	}
	return (NULL);
}
