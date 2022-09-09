#include <stdio.h>
/**
 * main - print numbers of base 16 in lowercase
 *
 * Return: 0 for success
 */
int main(void)
{
	int i = 0;
	char ch = 'a';

	while (i <= 9)
	{
		putchar(i + '0');
		i++;
	}
	while (ch <= 'f')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}
