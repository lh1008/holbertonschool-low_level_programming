#include "holberton.h"
/**
 * *_memcpy - Entry point
 * Desc: *_memcpy
 * @dest: char type
 * @src: char type
 * @n: unsigned int type
 * Return: Returns a pointer to  dest
 **/
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		dest[i] = *src;
		i++;
		src++;
	}
	return (dest);
}
