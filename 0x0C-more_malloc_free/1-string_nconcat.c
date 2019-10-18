#include "holberton.h"
#include <stdlib.h>
/**
 * string_nconcat - Entry Point
 * Desc: string_noncat function
 * @s1: char type
 * @s2: char type
 * @n: unsigned int type
 * Return: Function that concatenates two strings
 */
char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	int i, x;
	char *pn;
	unsigned int j, y;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	for (i = 1; s1[i] != '\0'; i++)
		;
	for (j = 1; s2[j] != '\0'; j++)
		;
	if (j > n)
		j = n;

	pn = malloc(sizeof(char) * ((i + j) + 1));
	if (pn == NULL)
		return (NULL);

	for (x = 0; s1[x] != '\0'; x++)
		pn[x] = s1[x];
	for (y = 0; n > y; y++, x++)
		pn[x] = s2[y];
	pn[x] = '\0';
	return (pn);
}
