#include "main.h"
/**
 * _puts_recursion - works similar to puts function
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	if (*s != '\0')
	{
		_putchar(*s);
		_puts_recursion(s + 1);
	}
}
