#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * get_nodeint_at_index - Entry point
 * Desc: get_nodeint_at_index function
 * @head: pointer to listint_t
 * @index: unsigned int
 * Return: Function that returns the nth node
 **/
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	listint_t *jar;
	unsigned int counter = 0;

	if (head == NULL)
		return (0);
	jar = head;
	while (jar != NULL)
	{
		if (counter == index)
			return (jar);
		counter++;
		jar = (*jar).next;
	}
	return (0);
}
