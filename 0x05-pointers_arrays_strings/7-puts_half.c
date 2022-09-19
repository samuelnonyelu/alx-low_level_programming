#include "main.h"
/**
 * stlen - works like strlen
 * @p: string
 *
 * Return: c
 */
int stlen(char *p)
{
	int c = 0;

	while (*(p + c) != '\0')
	{
		c++;
	}
	return (c);
}
/**
 * puts_half - prints 2nd half of a string
 * @str: string
 *
 * Return: void
 */
void puts_half(char *str)
{
	int i;

	if (stlen(str) % 2 != 0)
	{
		for (i = ((stlen(str) - 1) / 2); i < (stlen(str)); i++)
		{
			_putchar(str[i]);
		}
	}
	else
	{
		for (i = stlen(str)/2; i < stlen(str); i++)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}
