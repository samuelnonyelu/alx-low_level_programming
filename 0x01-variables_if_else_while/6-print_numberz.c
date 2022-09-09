#include <stdio.h>
/**
 * main - print single digit numbers with putchar
 *
 * Return: 0 for success
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		putchar(i);
		i++;
	}
	putchar('\n');
	return (0);
}
