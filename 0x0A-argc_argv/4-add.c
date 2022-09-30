#include "main.h"
#include <stdio.h>
#include <stdlib.h>
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
	int result = 0;

	for (i = 1; i < argc; i++)
	{
		int conv_num;
		char *p;

		conv_num = strtol(argv[i], &p, 10);

		if (p == argv[i])
		{
			printf("Error\n");
			return (1);
		}
		result += conv_num;
	}
	printf("%d\n", result);
	return (0);
}
