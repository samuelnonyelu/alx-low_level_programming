#include "main.h"
#include <string.h>
#include <stdbool.h>
/**
 * _strspn - man strspn
 * @s: string
 * @accept: string
 *
 * Return: number of bytes from s which consist only of bytes from accept
 */
unsigned int _strspn(char *s, char *accept)
{
	int ilen = 0;
	int i, j;
	int len1 = strlen(s);
	int len2 = strlen(accept);

	for (i = 0; i < len1; i++)
	{
		bool found_match = false;

		for (j = 0; j < len2; j++)
		{
			if (accept[j] == s[i])
			{
				found_match = true;
				break;
			}
		}
		if (!found_match)
		{
			break;
		}
		else
		{
			ilen++;
		}
	}


	return (ilen);
}
