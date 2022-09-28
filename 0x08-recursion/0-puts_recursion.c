#include "main.h"
#include <string.h>
#include <unistd.h>
/**
 * _puts_recursion - works similar to puts function
 * @s: string to print
 *
 * Return: void
 */
void _puts_recursion(char *s)
{
	write(1, s, strlen(s));
	_putchar('\n');
}
