#include <stdio.h>
/**
 * main - function prints all single digit numbers of base 10 starting from 0
 *
 * Return: 0 will return for success
 */
int main(void)
{
	int i;

	while (i < 10)
	{
		printf("%d", i);
		i++;
	}
	printf("\n");
	return (0);
}
