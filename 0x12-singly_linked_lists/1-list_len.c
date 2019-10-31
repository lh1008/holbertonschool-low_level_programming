#include "lists.h"
/**
 * list_len - Entry point
 * Desc: list_len function
 * @h: pointer to list_t
 * Return: Function that returns the number of elements.
 **/
size_t list_len(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		counter++;
		h = h->next;
	}
	return (counter);
}
