#include "lists.h"
/**
 * print_listint - Entry point
 * Desc: print_listint function
 * @h: pointer to listint_t
 * Return: Function that prints all the elements of a list.
 **/
size_t print_listint(const listint_t *h)
{
	size_t counter = 0;

	while (h != NULL)
	{
		printf("%d\n", (*h).n);
		counter++;
		h = (*h).next;
	}
	return (counter);
}
