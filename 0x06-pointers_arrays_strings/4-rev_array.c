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
	n--;
	while (b < n)
	{
		aux = *(a + (n - 1));
		*(a + (n - 1)) = a[b];
		a[b] = aux;
		b++;
		n--;
	}
}
