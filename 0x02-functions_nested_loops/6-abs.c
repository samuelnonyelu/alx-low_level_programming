#include "main.h"
/**
 * _abs - function will find the absolute value of integers
 * @n: number to find the absolute value
 *
 * Return: 0 for success
 */
int _abs(int n)
{
	if (n < 0)
	{
		n *= -1;
		_putchar(n + '0');
	}
	else
	{
		_putchar(n + '0');
	}

	return (0);
}
