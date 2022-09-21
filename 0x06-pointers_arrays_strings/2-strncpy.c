#include "main.h"
/**
 * _strlen - man strlen
 * @str: string
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
/**
 * _strncpy - man strncpy
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: destination string
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for (; i < n; i++)
		dest[i] = '\0';

	return (dest);
}
