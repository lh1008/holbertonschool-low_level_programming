#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Entry point
 * Desc: insert_nodeint_at_index function
 * @head: pointer of a pointer to listint_t
 * @idx: unsigned int index
 * @n: int n
 * Return: Function that inserts a new node
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *target, *actual, *next;

	actual = *head;
	target = malloc(sizeof(listint_t));
	if (target == NULL)
		return (NULL);
	(*target).n = n;
	if (idx == 0)
	{
		(*target).next = actual;
		*head = target;
		return (target);
	}
	while ((idx - 1) > 0)
	{

		if ((*actual).next == NULL)
		{
			free(target);
			return (NULL);
		}
		actual = (*actual).next;
		idx--;
	}
	next = (*actual).next;
	(*actual).next = target;
	(*target).next = next;
	return (target);
}
