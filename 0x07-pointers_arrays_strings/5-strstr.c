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
	int i = 0, x = 0;

	while (i != '0')
	{
		if (haystack[i] == needle[x])
		{
			return (haystack + i);
		}
		i++;
	}
	return ('\0');
}
