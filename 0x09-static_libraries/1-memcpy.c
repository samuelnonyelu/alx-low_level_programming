#include "main.h"
#include <stddef.h>
/**
 * _memcpy - man memcpy
 * @dest: destination string
 * @src: source char
 * @n: no of bytes
 *
 * Return: pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *_dest = (char *) dest;
	const char *_src = (const char *) src;

	if ((_dest != NULL) && (_src != NULL))
	{
		while (n)
		{
			*(_dest++) = *(_src++);
			--n;
		}
	}
	return (dest);
}
