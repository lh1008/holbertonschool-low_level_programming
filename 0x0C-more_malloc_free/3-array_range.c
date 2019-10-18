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

	if (min > max)
		return (NULL);

	subs = max - min;

	pn = malloc(sizeof(int) * (subs + 1));

	if (pn == NULL)
		return (NULL);

	for (amount = 0; amount < subs + 1; amount++)
		pn[amount] = min + amount;
	return (pn);
}
