#include "main.h"
/**
 * _strcmp - man strcmp, its the same thing
 * @s1: string 1
 * @s2: string 2
 *
 * Return: comparison value
 */

int _strcmp(char *s1, char *s2)
{
	while (*s1 && (*s1 == *s2))
	{
		s1++;
		s2++;
	}
	return (*(const unsigned char *)s1 - *(const unsigned char *)s2);
}
