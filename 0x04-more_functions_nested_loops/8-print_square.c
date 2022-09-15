#include "main.h"
/**
 * print_square - print square with # that are n x n size
 * @size: length x width size of the square
 * @size: same as above
 *
 * Return: 0 of success
 */
void print_square(int size)
{
	int i, j;

	if (size > 0)
	{
		for (i = 1; i <= size; i++)
		{
			for (j = 1; j <= size; j++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
	else
	{
		_putchar('\n');
	}
}
