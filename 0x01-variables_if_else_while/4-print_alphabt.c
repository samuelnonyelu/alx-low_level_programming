#include <stdio.h>
/**
 * main - function will print the alphabet in lower case alphabetically
 *
 * Return: 0 returned for success
 */
int main(void)
{
	char ch = 'a';

	while (ch <= 'z')
	{
		if (ch != 'q' && ch != 'e')
		{
			putchar(ch);
		}
		ch++;
	}
	putchar('\n');
	return (0);
}
