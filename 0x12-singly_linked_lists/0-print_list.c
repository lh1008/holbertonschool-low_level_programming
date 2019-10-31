#include "lists.h"
/**
 * print_list - Entry point
 * Desc: print_list function
 * @h: pointer to list_t
 * Return: Function that prints all the elements of a list.
 **/
size_t print_list(const list_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
		}
		else
		{
			printf("[%d] %s\n", h->len, h->str);
		}
		counter++;
		h = h->next;
	}
	return (counter);
}
