#include "holberton.h"
#include <stdio.h>
/**
 * print_diagsums - Entry point
 * Desc: print_diagsums matrix of integers
 * @a: int type
 * @size: int type
 * Return: Sum of the two diagonals of a square matrix of integers.
 **/
void print_diagsums(int *a, int size)
{
	int x = 0, y = size - 1, first, second;

	first = 0;
	second = 0;

	while (x < (size * size))
	{
		first += a[x];
		x += size + 1;
	}
	while (y < (size * size) - 1)
	{
		second += a[y];
		y += a[y];
	}
	printf("%d, %d\n", first, second);
}
