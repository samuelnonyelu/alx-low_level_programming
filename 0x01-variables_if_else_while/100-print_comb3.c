#include <stdio.h>
/**
 * main - function will print all possible combinations of two digit numbers
 *
 * Return: 0 for success
 */
int main(void)
{
	int a, b;

	for (a = 0; a < 9; a++)
	{
		for (b = a + 1; b < 10; b++)
		{
			if (a != b)
			{
				putchar(a + '0');
				putchar(b + '0');
				if (a + b < 17)
				{
					putchar(',');
					putchar(' ');
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
