#include "main.h"
#include <stdio.h>
/**
 * _abs - function will find the absolute value of integers
 * @n: number to find the absolute value
 *
 * Return: 0 for success
 */
int _abs(int n)
{
	
	if (n < 0)
	{
		printf("%d", -n);
	}
	else
	{
		printf("%d", n);
	}

	return (0);
}
