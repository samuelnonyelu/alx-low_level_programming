#include "main.h"
/**
 * stlen - works like strlen function
 * @p: pointer to string
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
 * puts2 - prints every other character of a string,
 * starting with the first character, followed by a new line
 * @str: string
 *
 * Return: void
 */
void puts2(char *str)
{
	int i;

	for (i = 0; i < stlen(str); i += 2)
	{
		_putchar(str[i]);
	}
	_putchar('\n');
}
