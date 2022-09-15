#include "main.h"
/**
 * more_numbers - prints 0 to 14 on 10 lines
 *
 * Return: 0 for success;
 */
void more_numbers(void)
{
	int i = 1;
	int j = 0;

	while (i < 11)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				_putchar(j / 10 + '0');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
		i++;
	}
}
