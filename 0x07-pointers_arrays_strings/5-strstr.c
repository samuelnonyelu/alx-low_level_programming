#include "main.h"
#include <string.h>
/**
 * _strstr - finds the first occurrence of string needle in the string haystack
 * @haystack: string
 * @needle: string
 *
 * Return: pointer to beginning of neddle
 */
char *_strstr(char *haystack, char *needle)
{
	static char *ptr;

	ptr = haystack;

	while (*ptr)
	{
		if (strncmp(ptr, needle, strlen(needle)) == 0)
		{
			return (ptr);
		}
		ptr++;
	}
	return (NULL);
}
