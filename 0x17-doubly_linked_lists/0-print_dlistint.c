#include "lists.h"
#include <string.h>
/**
 * print_dlistint - Entry point
 * Desc: print_dlistint function
 * @h: const dlistint_t type
 * Return: Function that prints all the elements
 **/
size_t print_dlistint(const dlistint_t *h)
{
	size_t i;

	for (i = 0; h != NULL; i++)
	{
		printf("%d\n", h->n);
		h = h->next;
	}
	return (i);
}
