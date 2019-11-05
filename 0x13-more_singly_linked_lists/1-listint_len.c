#include "lists.h"
/**
 * listint_len - Entry point
 * Desc: listint_len function
 * @h: pointer to list_t
 * Return: Function that returns the number of elements.
 **/
size_t listint_len(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = (*h).next;
	}
	return (counter);
}
