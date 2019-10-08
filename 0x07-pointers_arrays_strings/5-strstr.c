#include "holberton.h"
/**
 * _strstr - Entry point
 * Desc: _strstr
 * @haystack: char type
 * @needle: char type
 * Return: function that locates a substring
 **/
char *_strstr(char *haystack, char *needle)
{
	while (*haystack != '0')
	{
		char *i = haystack;
		char *x = needle;
		while (*x == *haystack && *x != '\0' && *haystack != '\0')
		{
			haystack++;
			x++;
		}
		if (*x == '\0')
			return (i);
		haystack = i + 1;
	}
	return (0);
}
