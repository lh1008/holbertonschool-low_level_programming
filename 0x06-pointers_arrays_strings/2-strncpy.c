#include "holberton.h"
/**
 * _strncat - Entry point
 * Desc: _strncat
 * @dest: char type
 * @src: char type
 * @n: int type
 * Return: char (dest)
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[i] = src[i];
	for ( ; i < n; i++)
	dest[i] = '\0';
	return (dest);
}
