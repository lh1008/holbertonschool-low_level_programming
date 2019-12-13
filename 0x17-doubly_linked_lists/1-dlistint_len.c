#include "lists.h"
#include <string.h>
/**
 * dlistint_len - Entry point
 * Desc: dlistint_len function
 * @h: const dlistint_t type
 * Return: The number of elements
 **/
size_t dlistint_len(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		h = h->next;
	}
	return (i);
}
