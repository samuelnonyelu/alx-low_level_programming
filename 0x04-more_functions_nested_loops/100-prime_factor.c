#include <stdio.h>
/**
 * main - function will find largest prime factor of given number
 *
 * Return: 0
 */
int main(void)
{
	int maxPrime, oddPrime;
	long int num = 612852475144;

	maxPrime = 0;
	oddPrime = 3;

	while (num % 2 == 0)
	{
		maxPrime = 2;
		num /= 2;
	}
	while (num != 1)
	{
		while (num % oddPrime == 0)
		{
			maxPrime = oddPrime;
			num /= oddPrime;
		}
		oddPrime += 2;
	}
	printf("%d\n", maxPrime);

	return (0);
}
