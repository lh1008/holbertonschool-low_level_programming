#include "holberton.h"
/**
 * _strncat - Entry point
 * Desc: _strncat
 * @dest: char type
 * @src: char type
 * @n: int type
 * Return: char (dest)
 */
char *_strncat(char *dest, char *src, int n)
{
	int i = 0, e = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while ((src[e] != '\0') && (e < n))
	{
		dest[i] = src[e];
		e++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
