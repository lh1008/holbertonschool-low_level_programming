#include "lists.h"
#include <string.h>
/**
 * get_dnodeint_at_index - Entry point
 * Desc: get_dnodeint_at_index function
 * @head: pointer to dlistint_t
 * @index: unsigned int
 * Return: Function that returns the nth node
 **/
dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	dlistint_t *get_node;
	unsigned int counter = 0;

	if (head == NULL)
		return (0);
	get_node = head;
	while (get_node != NULL)
	{
		if (counter == index)
			return (get_node);
		counter++;
		get_node = get_node->next;
	}
	return (0);
}
