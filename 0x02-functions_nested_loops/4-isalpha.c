#include "main.h"
/**
 * _isalpha - will check if a letter be it uppercase or lowercase
 * @c: takes an integer to use in the if statement
 *
 * Return: 1 returned for success while 0 returned for otherwise
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);

}
