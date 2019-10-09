#include "holberton.h"
/**
 * _pow_recursion - Entry point
 * Desc: _pow_recursion
 * @x: int type
 * @y: int type
 * Return: Function that returns the value of `x` raised to the power of `y`.
 **/
int _pow_recursion(int x, int y)
{
	if (y == 0)
		return (1);
	else if (y < 0)
		return (-1);
	return (x * _pow_recursion(x, y - 1));
}
