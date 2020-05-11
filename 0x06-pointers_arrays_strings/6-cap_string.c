#include "holberton.h"

/**
 * cap_string - Entry point
 * Desc: cap_string function
 * Return: Function that capitalizes all words of a string.
 **/
char *cap_string(char *c)
{
	int i = 0;

	if (c[i] >= 97 && c[i] <= 122)
		c[i] = c[i] - 32;

	while (c[i] != '\0')
	{
		if ((c[i - 1] == ' ' || c[i - 1] == '\t' || c[i - 1] == '\n' ||
		     c[i - 1] == ',' || c[i - 1] == ';' || c[i - 1] == '.' ||
		     c[i - 1] == '!' || c[i - 1] == '?' || c[i - 1] == '"' ||
		     c[i - 1] == '(' || c[i - 1] == ')' || c[i - 1] == '{' ||
		     c[i - 1] == '}') && (c[i] >= 'a' && c[i] <= 'z'))
			c[i] = c[i] - 32;
		i++;
	}
	return (c);
}
