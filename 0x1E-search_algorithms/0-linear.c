#include "search_algos.h"

/**
 * linear_search - Entry point
 * Desc: linear_search function
 * @array: int pointer for first element of array
 * @size: size_t datatype, number of elements in array
 * @value: int type, value to search for
 * Return: The first index where value is located
 **/

int linear_search(int *array, size_t size, int value)
{
	unsigned int x = 0;

	if (array == NULL)
		return (-1);

	while (x < size)
	{
		printf("Value checked array[%i] = [%i]\n", x,  array[x]);
		if (array[x] == value)
		{
			return (x);
		}
		x++;
	}
	return (-1);
}
