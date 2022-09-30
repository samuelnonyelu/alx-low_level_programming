#include <unistd.h>
/**
 * _putchar - write char c to std out
 * @c: character to print
 *
 * Return: 1 for success
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}
