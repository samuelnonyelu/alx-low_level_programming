#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include "variadic_functions.h"
/**
 * print_numbers - prints numbers spaced by a user defined separator and "\n"
 * @separator: string character to space the numbers like , . / etc
 * @n: number of integers
 *
 * Return: void
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	int x;
	va_list nums;

	if (n == 0)
		return;

	va_start(nums, n);

	for (i = 0; i < n; i++)
	{
		x = va_arg(nums, int);
		printf("%d", x);

		if (separator == NULL)
			continue;
		if (i < (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(nums);
}
