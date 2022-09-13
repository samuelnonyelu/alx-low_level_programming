#include "main.h"
/**
 * _islower - will check if a character is lowercase
 * @c: takes an integer to use in the if statement
 *
 * Return: 1 returned for success while 0 returned for failure
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);

}
