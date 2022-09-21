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
 * _strncat - man strncat
 * @dest: destination string
 * @src: source string
 * @n: number of bytes
 *
 * Return: destination string
 */
char *_strncat(char *dest, char *src, int n)
{
	int dest_len = _strlen(dest);
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[dest_len + i] = src[i];
	dest[dest_len + i] = '\0';

	return (dest);
}
