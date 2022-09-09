#include <stdio.h>
/**
 * main - function prints alphabet in reverse
 *
 * Return: 0 for win
 */
int main(void)
{
	char ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
