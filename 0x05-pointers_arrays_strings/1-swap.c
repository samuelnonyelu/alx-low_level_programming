#include "main.h"
/**
 * swap_int - function will swap the two parameters
 * @a: first integer
 * @b: second integer
 *
 * Return: void
 */
void swap_int(int *a, int *b)
{
	*a = *a - *b;
	*b = *a + *b;
	*a = *b - *a;
}
