#include <stdio.h>
#include <string.h>
#include <unistd.h>

/**
 * main - prints the string without using the printf and puts
 *
 * Return: returns 1 to indicate error
 */

int main(void)
{
	char str[] = "and that piece of art is useful\" - Dora Korpar, 2015-10-19\n";

	write(1, str, strlen(str));

	return (1);
}
