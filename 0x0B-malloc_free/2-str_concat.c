#include "holberton.h"
#include <stdlib.h>
/**
 * str_concat - Entry point
 * Desc: str_concat function
 * @s1: char type
 * @s2: char type
 * Return: Function that concatenates two strings
 **/
char *str_concat(char *s1, char *s2)
{
	int i = 0, j = 0, x, f, l;
	char *len;

	if (s1 == NULL && s2 == NULL)
		return (NULL);
	while (s1[i] != '\0')
		i++;
	while (s2[j] != '\0')
		j++;
	j++;
	f = i + j;
	len = malloc(sizeof(char) * f);
	if (len == NULL)
		return (NULL);
	for (x = 0; x < i; x++)
		len[x] = s1[x];
	for (l = 0; x < f; x++, l++)
		len[x] = s2[l];
	return (len);
}
