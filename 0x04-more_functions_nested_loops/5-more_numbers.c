#include "main.h"
/**
 * more_numbers - prints 0 to 14 on 10 lines
 *
 * Return: 0 for success;
 */
void more_numbers(void)
{
	int i = 1;
	int j;
	int k;

	while (i < 11)
	{
		for (j = 0; j < 10; j++)
		{
			_putchar(j + '0');
		}
		for (k = 10; k < 15; k++)
		{
			_putchar(k / 10 + '0');
			_putchar(k % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
