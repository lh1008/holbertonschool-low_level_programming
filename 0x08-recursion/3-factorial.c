#include "holberton.h"
/**
 * factorial - Entry point
 * Desc: factorial
 * @n: int type
 * Return: Function that returns the factorial of a given number.
 **/
int factorial(int n)
{
	if (n == 0)
		return (1);
	if (n < 0)
		return (-1);
	return (n * factorial(n - 1));
}
