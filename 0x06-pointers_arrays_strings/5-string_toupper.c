#include "holberton.h"
/**
 * string_toupper - Entry point
 * Desc: string_toupper
 * @e: int type
 * Return: nothing
 */
char *string_toupper(char *e)
{
	int i;

	for (i = 0; e[i] != '\0'; i++)
		if (e[i] >= 97 && e[i] <= 122)
			e[i] = e[i] - 32;
	return (e);
}
