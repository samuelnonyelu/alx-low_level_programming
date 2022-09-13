#include "main.h"
/**
 * print_alphabet_x10 - prints alphabet in lowercase 10x
 *
 * Return: returns void
 */
void print_alphabet_x10(void)
{
	char ch;
	int i = 1;

	while (i < 11)
	{
		for (ch = 'a'; ch <= 'z'; ch++)
		{
			_putchar(ch);
		}
		_putchar('\n');
		i++;
	}
}
