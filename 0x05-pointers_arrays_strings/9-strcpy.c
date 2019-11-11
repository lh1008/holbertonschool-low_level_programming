#include "holberton.h"
/**
 * _strcpy - Entry point
 * Desc: _strcpy function
 * @dest: pointer to char type
 * @src: pointer to char type
 * Return: Function that copies the string pointed to by src
 */
char *_strcpy(char *dest, char *src)
{
	int i = 0;

	if (src[i] != '\0')
	{
		while (src[i] != '\0')
		{
			dest[i] = src[i];
			i++;
		}
		if (src[i + 1] == '\0')
			dest[i + 1] = src[i + 1];
	}
	return (dest);
}
