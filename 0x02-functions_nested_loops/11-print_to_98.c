#include "main.h"
#include <stdio.h>
/**
 * print_to_98 - any number passed in as parameter will be printed till 98
 * @n: integer passed in to be printed till 98
 *
 * Return: return value of void
 */
void print_to_98(int n)
{
	if (n <= 98)
	{
		for (; n <= 98; n++)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
	}
	else if (n > 98)
	{
		for (; n >= 98; n--)
		{
			printf("%d", n);
			if (n == 98)
			{
				continue;
			}
			printf(", ");
		}
	}
	printf("\n");
}
