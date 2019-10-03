#include "holberton.h"
#include <stdio.h>
/**
 * print_to_98 - Entry point
 * Desc: print_to_98
 * @n: int type
 * Return: Always 0 (Success)
 */
void print_to_98(int n)
{
	int i;

	if (n <= 98)
	{
		for (i = n; i <= 98; i++)
		{
			if (i != n)
				printf(", ");
			printf("%d", i);
		}
	}
	else
	{
		for (i = n; i >= 98; i--)
		{
			if (i != n)
				printf(", ");
			printf("%d", i);
		}
	}
	printf("\n");
}
