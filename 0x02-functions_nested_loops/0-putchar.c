#include "main.h"
/**
 * main - print string using putchar
 *
 * Return: 0 for success
 */

int main(void)
{
	char ch[] = "_putchar";
	int i = 0;

	while (ch[i] != '\0')
	{
		_putchar(ch[i]);
		i++;
	}
	_putchar('\n');

	return (0);
}
