#include "lists.h"
#include <string.h>
/**
 * insert_dnodeint_at_index - Entry point
 * Desc: insert_dnodeint_at_index function
 * @h: pointer of a pointer to dlistint_t
 * @idx: unsigned int index
 * @n: int n
 * Return: Function that inserts a new node at a given position
 **/
dlistint_t *insert_dnodeint_at_index(dlistint_t **h, unsigned int idx, int n)
{
	dlistint_t *target, *actual, *next;

	actual = *h;
	target = malloc(sizeof(dlistint_t));
	if (target == NULL)
		return (NULL);
	target->n = n;
	if (idx == 0)
	{
		target->next = actual;
		*h = target;
		return (target);
	}
	while ((idx - 1) > 0)
	{

		if (actual->next == NULL)
		{
			free(target);
			return (NULL);
		}
		actual = actual->next;
		idx--;
	}
	next = actual->next;
	actual->next = target;
	target->next = next;
	return (target);
}
