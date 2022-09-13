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
		int a = -(n % 10);

		_putchar(a + '0');
		return (a);
	}
	else
	{
		int a = n % 10;

		_putchar('0' + a);
		return (a);
	}
}
