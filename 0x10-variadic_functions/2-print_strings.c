#include <stdio.h>
#include <stddef.h>
#include <stdarg.h>
#include <string.h>
#include "variadic_functions.h"
/**
 * print_strings - prints strings with separator
 * @separator: characters like , . / and etc
 * @n: no of strings to print
 *
 * Return: void
 */
void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *s;
	va_list strings;

	if (separator == NULL)
		separator = "";

	va_start(strings, n);

	for (i = 0; i < n; i++)
	{
		s = va_arg(strings, char *);
		if (s == NULL)
			printf("nil");
		else
			printf("%s", s);

		if (i != (n - 1))
			printf("%s", separator);
	}
	printf("\n");
	va_end(strings);
}
