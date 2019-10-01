#include "holberton.h"
/**
 * swap_int - Entry point
 * Desc: swap_int
 * @a: int type
 * @b: int type
 * Return: Always 0 (Success)
 */
void swap_int(int *a, int *b)
{
	int x = *a;

	*a = *b;
	*b = x;

}
