#include "main.h"
/**
 * print_last_digit - self described
 * @n: integer for which last digit is extracted
 *
 * Return: 0 for success
 */
int print_last_digit(int n)
{
	if (n < 0 || n == 2147483647-1)
	{
		int a = -n;
		int x = a % 10;

		_putchar(x + '0');
		return (x);
	}
	else
	{
		int x = n % 10;

		_putchar('0' + x);
		return (x);
	}
}
