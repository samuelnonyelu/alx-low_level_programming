#define NULL 0
#include "main.h"
/**
 * _strcpy - works like strcpy form standard library
 * @dest: desination of string to be copied
 * @src: source to copy from
 *
 * Return: pointer to dest
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	if (dest == NULL)
	{
		return NULL;
	}
	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';
	return (ptr);
}
