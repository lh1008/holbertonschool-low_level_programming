#include "function_pointers.h"
#include <stdio.h>
/**
 * int_index - Entry Point
 * Desc: int_index function
 * @array: int type
 * @size: int type
 * @cmp: pointer to function
 * Return: Function that searches for an integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array && size && cmp)
	{
		if (size <= 0)
			return (-1);
		for (i = 0; i < size; i++)
			if (cmp(array[i]))
				return (i);
	}
	return (-1);
}
