#include "main.h"
/**
 * cap_string - function will capitalize every word in a string
 * @ch: string
 *
 * Return: char
 */
char *cap_string(char *ch)
{
	int count = 0, i;
	int sep_words[] = {32, 9, 10, 44, 59, 46, 33, 63, 34, 40, 41, 123, 125};

	if (*(ch + count) >= 97 && *(ch + count) <= 122)
	{
		*(ch + count) = *(ch + count) - 32;
	}
	count++;
	while (*(ch + count) != '\0')
	{
		for (i = 0; i < 13; i++)
		{
			if (*(ch + count) == sep_words[i])
			{
				if ((*(ch + (count + 1)) >= 97) && (*(ch + (count + 1)) <= 122))
				{
					*(ch + (count + 1)) = *(ch + (count + 1)) - 32;
				}
				break;
			}
		}
		count++;
	}
	return (ch);
}
