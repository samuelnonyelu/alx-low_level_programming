#include "main.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>
/**
 * string_nconcat - function joins the s1 to the first n bytes of s2
 * @s1: first string
 * @s2: second string
 * @n: n bytes of string 2
 *
 * Return: pointer to the concatenated string
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *arrstr;
	unsigned int l1, l2, l, i;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	l1 = strlen(s1);
	l2 = strlen(s2);
	l = l1 + l2 + 1;

	arrstr = malloc(l * sizeof(*arrstr));

	if (arrstr == NULL)
	{
		free(arrstr);
		return (NULL);
	}
	if (n >= l2)
	{
		for (i = 0; i < l1; i++)
			arrstr[i] = s1[i];
		for (i = 0; i < l2; i++)
			arrstr[l1 + i] = s2[i];
		arrstr[l - 1] = '\0';

		return (arrstr);
	}
	else
	{
		for (i = 0; i < l1; i++)
			arrstr[i] = s1[i];
		for (i = 0; i < n && s2[i] != '\0'; i++)
			arrstr[l1 + i] = s2[i];
		arrstr[l - 1] = '\0';

		return (arrstr);
	}
}
