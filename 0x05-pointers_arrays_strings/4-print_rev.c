#include "main.h"
/**
 * print_rev - prints a string in reverse
 * @s: string to be reversed
 *
 * Return: void
 */
void print_rev(char *s)
{
	int i;

	i = 0;

	while (i >= 0)
	{
		if (s[i] == '\0')
		{
			break;
		}
		i++;
	}
	for (i--; i >= 0; i--)
	{
		_putchar(s[i]);
	}
	_putchar('\n');
}
