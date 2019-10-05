#include "holberton.h"
/**
 * reverse_array - Entry point
 * Desc: reverse_array
 * @a: int type
 * @n: int type
 * Return: nothing
 */
void reverse_array(int *a, int n)
{
	int b = 0, aux;

	while (a[n] != '\0')
	{
		n++;
	}
	n = n - 2;
	while (b < n)
	{
		aux = a[n];
		a[n] = a[b];
		a[b] = aux;
		b++;
		n--;
	}
}
