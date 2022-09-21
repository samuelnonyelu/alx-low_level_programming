#include "main.h"
/**
 * _strlen - custom strlen function available in standard library
 * @str: string input
 *
 * Return: length of string
 */
int _strlen(const char *str)
{
	int len;

	for (len = 0;; ++len)
		if (str[len] == 0)
			return (len);
}
