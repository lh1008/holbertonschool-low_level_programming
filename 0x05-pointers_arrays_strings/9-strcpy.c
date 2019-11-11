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
	size_t i;

	if (src != '\0')
	{
		for (i = 0; src[i] != '\0'; i++)
			dest[i] = src[i];
		if (i > 0)
			dest[i + 1] = '\0';
	}
	return (dest);
}
