#include "holberton.h"
#include <ctype.h>
/**
 * _isalpha - Continue point
 * Desc: _isalpha
 * @c: int c
 * Return: Always 0 (Success)
 */
int _isalpha(int c)
{
	if ((c >= 65 && c <= 90) || (c >= 97 && c <= 122))
		return (1);
	else
		return (0);
}
