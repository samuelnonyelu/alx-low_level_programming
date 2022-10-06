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

	for (l1 = 0; s1[l1] != '\0'; l1++)
		;
	for (l2 = 0; s2[l2] != '\0'; l2++)
		;

	if (n >= l2)
		n = l2;

	l = l1 + n;

	arrstr = malloc(l + 1);

	if (arrstr == NULL)
		return (NULL);

	for (i = 0; i < l; i++)
	{
		if (i < l1)
			arrstr[i] = s1[i];
		else
			arrstr[i] = s2[i - l1];
	}
	arrstr[i] = '\0';

	return (arrstr);
}
