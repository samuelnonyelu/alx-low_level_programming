#include "main.h"
/**
 * _strlen - custom strlen function available in standard library
 * @str: string input
 *
 * Return: length of string
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}
