#include "main.h"
/**
 * print_diagonal - print diagonal lines than end in \
 * @n: number of times '\' should be printed
 * @n: same as above
 *
 * Return: 0 of success
 */
void print_diagonal(int n)
{
	int i, j;

	if (n > 0)
	{
		for (i = 1; i <= n; i++)
		{
			for (j = 1; j < i; j++)
			{
				_putchar(' ');
			}
			_putchar(92);
			_putchar('\n');
		}
	}
	else if (n <= 0)
	{
		_putchar('\n');
	}
}
