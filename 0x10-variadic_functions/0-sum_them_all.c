#include <stdio.h>
#include "variadic_functions.h"
#include <stdarg.h>
/**
 * sum_them_all - returns the sum of all parameters
 * @n: number of parameters
 *
 * Return: sum of all integers
 */
int sum_them_all(const unsigned int n, ...)
{
	unsigned int i;
	int x, sum = 0;
	va_list nums;

	if (n == 0)
		return (0);

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		sum += x;
	}
	va_end(nums);

	return (sum);
}
