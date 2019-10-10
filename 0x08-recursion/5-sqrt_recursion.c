#include "holberton.h"
/**
 * _sqrt_recursion - Entry point
 * Desc: _sqrt_recursion
 * @n: int type
 * Return: Function that returns the natural square root of a number.
 **/
int _sqrt_recursion(int n)
{
	return (_sqrt_recur(n, 1));
}

/**
 * _sqrt_recur - Second entry
 * Desc: _sqrt_recur
 * @n: int type
 * @i: int type
 * Return: i in square value
 **/
int _sqrt_recur(int n, int i)
{
	if (n <= 0)
		return (-1);
	if (i * i > n)
		return (-1);
	if (n == i * i)
		return (i);
	return (_sqrt_recur(n, i + 1));
}
