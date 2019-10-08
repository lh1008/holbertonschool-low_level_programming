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
	int i, j, first, second;

	first = 0;
	second = 0;

	for (i = 0; i < (size * size); i += size + 1)
	{
		first += a[i];
	}
	for (j = size - 1; j < (size * size) - 1; j += size - 1)
	{
		second += a[j];
	}
	printf("%d, %d\n", first, second);
}
