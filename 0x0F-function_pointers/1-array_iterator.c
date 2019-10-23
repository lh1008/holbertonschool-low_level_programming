#include "function_pointers.h"
/**
 * array_iterator - Entry Point
 * Desc: array_iterator function
 * @array: int type
 * @size: size_t type
 * @action: void type
 * Return: Function that prints a name
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	if (size && array && action)
		for (i = 0; i < size; i++)
			action(array[i]);
}
