#include "main.h"
/**
 * string_length - works like strlen function
 * @p: pointer to string
 *
 * Return: c
 */
int string_length(char *p)
{
	int c = 0;

	while (*(p + c) != '\0')
	{
		c++;
	}
	return (c);
}
/**
 * rev_string - reverses a string
 * @s: string to be reversed
 *
 * Return: void
 */
void rev_string(char *s)
{
	int length, c;
	char *begin, *end, temp;

	length = string_length(s);

	begin = s;
	end = s;

	for (c = 0; c < (length - 1); c++)
	{
		end++;
	}
	for (c = 0; c < length / 2; c++)
	{
		temp = *end;
		*end = *begin;
		*begin = temp;

		begin++;
		end--;
	}
}
