#include "main.h"
/**
 * _strlen_recursion - will find the length of a string using recursion
 * @s: string to find length
 *
 * Return: int of length of s
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	else
		return (1 + _strlen_recursion(s + 1));
}
