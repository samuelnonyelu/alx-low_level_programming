#include "main.h"
/**
 * more_numbers - prints 0 to 14 on 10 lines
 *
 * Return: 0 for success;
 */
void more_numbers(void)
{
	int i, j;

	for (i = 1; i <= 10; i++)
	{
		for (j = 0; j < 15; j++)
		{
			if (j > 9)
			{
				putchar(j / 10 + '0');
				putchar(j % 10 + '0');
			}
		}
		putchar('\n');
	}
}
