#include "holberton.h"
#include <ctype.h>
/**
 * _islower - Continue point
 * Desc: _islower
 * @c: int c
 * Return: Always 0 (Success)
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}
