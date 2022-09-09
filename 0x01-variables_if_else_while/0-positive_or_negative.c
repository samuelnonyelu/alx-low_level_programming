#include <stdio.h>
#include <time.h>
#include <stdlib.h>
/**
 * main - function will check if the number is +, - or = to 0
 *
 * Return: 0 returned for success
 */
int main(void)
{
	int n;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	if (n > 0)
		printf("%d is positive\n", n);
	else if (n == 0)
		printf("%d is zero\n", n);
	else if (n < 0)
		printf("%d is negative\n", n);

	return (0);
}
