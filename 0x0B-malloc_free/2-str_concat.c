#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/**
 * str_concat - concatenates 2 strings and stores the result in a string
 * @s1: first string
 * @s2: second string
 *
 * Return: pointer to concatenated string
 */
char *str_concat(char *s1, char *s2)
{
	int s1_len;
	int s2_len;
	int size;
	char *newstring;
	int i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_len = strlen(s1);
	s2_len = strlen(s2);
	size = s1_len + s2_len + 1;
	newstring = malloc(size * sizeof(*newstring));

	if (newstring == NULL)
	{
		free(newstring);
		return (NULL);
	}

	for (i = 0; i < s1_len; i++)
		newstring[i] = s1[i];

	for (i = 0; i < s2_len; i++)
		newstring[s1_len + i] = s2[i];

	newstring[size - 1] = '\0';

	return (newstring);
}
