#include "holberton.h"
/**
 * _strcat - Entry point
 * Desc: _strcat
 * @dest: char type
 * @src: char type
 * Return: Always 0 (Success)
 */
char *_strcat(char *dest, char *src)
{
	int i = 0, e = 0;

	while (dest[i] != '\0')
	{
		i++;
	}
	while (src[e] != '\0')
	{
		dest[i] = src[e];
		e++;
		i++;
	}
	dest[i] = '\0';
	return (dest);
}
