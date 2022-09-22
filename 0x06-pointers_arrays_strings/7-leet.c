#include "main.h"
/**
 * leet - function encodes a string into leet
 * @ch: string
 *
 * Return: string in leet form
 */
char *leet(char *ch)
{
	int i, j;
	char l1[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char l2[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	i = 0;
	while (ch[i])
	{
		for (j = 0; j < 10; j++)
		{
			if (ch[i] == l1[j])
			{
				ch[i] = l2[j];
			}
		}
		i++;
	}
	return (ch);
}
