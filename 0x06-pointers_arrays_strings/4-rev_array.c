#include "main.h"
/**
 * reverse_array - reverses an array of integers
 * @a: array
 * @n: number of elements in array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int i, temp;

	for (i = 0; i < (n / 2); i++)
	{
		temp = a[i];
		a[i] = a[n - i - 1];
		a[n - i - 1] = temp;
	}
}
