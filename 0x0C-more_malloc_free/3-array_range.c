#include "holberton.h"
#include <stdlib.h>
/**
 * array_range - Entry Point
 * Desc: array_range function
 * @min: int type
 * @max: int type
 * Return: Function that creates an array of integers
 */
int *array_range(int min, int max)
{
	int *pn, subs, amount;

	subs = max - min;

	if (min > max)
		return (NULL);

	pn = malloc(sizeof(int) * (subs + 1));

	if (pn == NULL)
		return (NULL);

	for (amount = 0; amount < subs * 1; amount++)
		pn[amount] = min++;
	return (pn);
}
