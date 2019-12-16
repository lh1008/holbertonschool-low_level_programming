#include "holberton.h"
char *_strstr(char *haystack, char *needle)
{
	int i;
	char *p = NULL;

	for (i = 0; haystack[i] != '\n'; i++)
	{
		if (haystack[i] == needle[0])
		if (p != NULL)
			return (p);
	}

	return (NULL);
}
