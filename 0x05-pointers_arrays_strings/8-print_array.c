#include "holberton.h"
#include <stdio.h>

/**
 * print_array - Entry point
 * Desc: print_array function
 * @a: pointer to int type
 * @n: int type
 * Return: Function that prints n elements of an array of integers
 **/
void print_array(int *a, int n)
{
	int counter = 0;

	while (counter < n)
	{
		printf("%d", a[counter]);
		if (counter < (n - 1))
			printf(", ");
		counter++;
	}
	printf("\n");
}
