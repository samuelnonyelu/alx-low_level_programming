#include <stdio.h>
/**
 * main - function will print all possible combinations of single digit numbers
 *
 * Return: 0 for success
 */
int main(void)
{
	int i = 0;

	while (i <= 9)
	{
		putchar(i + '0');
		if (i < 9)
		{
			putchar(',');
			putchar(' ');	
		}
		i++;
	}
	putchar('\n');
	return (0);
}
