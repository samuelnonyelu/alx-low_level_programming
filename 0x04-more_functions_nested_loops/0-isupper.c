#include "main.h"
/**
 * _isupper - fucntion will determine if a letter is uppercase and return
 * @c: first integer
 *
 * Return: 1 if uppercase
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
		return (1);
	else
		return (0);
}
