#include "main.h"
/**
 * print_number - prints any size integer using putchar
 * @n: integer to print
 *
 * Return: 0 for success
 */
void print_number(int n)
{
	char lastDigit;
	int reversed;

	if (n < 0)
	{
		_putchar('-');
		lastDigit = (char)('0' - (n % 10));
		n /= -10;
	}
	else
	{
		lastDigit = (char)((n % 10) + '0');
		n /= 10;
	}

	reversed = 0;
	while (n > 0)
	{
		reversed = reversed * 10 + (n % 10);
		n /= 10;
	}

	while (reversed > 0)
	{
		char c = (char)((reversed % 10) + '0');

		_putchar(c);
		reversed /= 10;
	}
	_putchar(lastDigit);
}
