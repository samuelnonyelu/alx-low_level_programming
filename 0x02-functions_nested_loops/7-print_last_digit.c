#include "main.h"
/**
 * print_last_digit - self described
 * @n: integer for which last digit is extracted
 *
 * Return: 0 for success
 */
int print_last_digit(int n)
{
	if (n < 0)
	{
		int a = -n;
		int x = a % 10;

		return (x);
	}
	else
	{
		int x = n % 10;

		_putchar(x + '0');
		return(0);
	}
}
