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
	int i, j, len;

	if (width == 0)
		return (NULL);
	if (height == 0)
		return (NULL);
	int **arr = (int **)malloc(sizeof(int *) * height);

	for (i = 0; i <= height; i++)
		arr[i] = (int *)malloc(sizeof(int) * width);

	len = 0;
	for (i = 0; i < height; i++)
		for (j = 0; j < width; j++)
			arr[i][j] = len;
	return (arr);
}
