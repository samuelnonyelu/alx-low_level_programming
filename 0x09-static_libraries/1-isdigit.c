#include "main.h"
/**
 * _isdigit - function checks if input is a digit
 * @c: digit parameter
 *
 * Return: 1 for success
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}
