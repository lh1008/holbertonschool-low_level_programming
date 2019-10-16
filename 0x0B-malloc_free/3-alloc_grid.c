#include "holberton.h"
#include <stdlib.h>
/**
 * alloc_grid - Entry point
 * Desc: alloc_grid function
 * @width: int type
 * @height: int type
 * Return: 2 dimensional array of integers.
 **/
int **alloc_grid(int width, int height)
{
	int i, j, len, **x;

	if (width == 0 || height == 0)
		return (NULL);

	x = (int **)malloc(sizeof(int *) * height);

	if (x == NULL)
		return (NULL);

	for (i = 0; i <= height; i++)
	{
		x[i] = (int *)malloc(sizeof(int) * width);

		if (x[i] == NULL)
		{
			for (i--; i >= 0; i--)
				free(x[i]);
			free(x);
			return (NULL);
		}

		len = 0;
		for (j = 0; j < width; j++)
			x[i][j] = len;
	}
	return (x);
}
