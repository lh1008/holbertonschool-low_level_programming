#include "holberton.h"
#include <stdlib.h>
/**
 * free_grid - Entry point
 * Desc: free_grid function
 * @grid: int pointer type
 * @height: int type
 * Return: Free Memory allocation
 **/
void free_grid(int **grid, int height)
{
	int j;

	for (j = 0; j < height; j++)
	{
		free(grid[j]);
	}
	free(grid);
}
