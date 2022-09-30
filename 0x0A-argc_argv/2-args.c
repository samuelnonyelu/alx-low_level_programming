#include "main.h"
#include <stdio.h>
/**
 * main - check code
 * @argc: argument count as int which counts and stores no of command line arg
 * @argv: argument array of character pointers listing all the arguments
 *
 * Return: integer
 */
int main(int argc, char *argv[])
{
	int i;

	if (argc > 0)
	{
		for (i = 0; i < argc; i++)
		{
			printf("%s\n", argv[i]);
		}
	}
	return (0);
}
