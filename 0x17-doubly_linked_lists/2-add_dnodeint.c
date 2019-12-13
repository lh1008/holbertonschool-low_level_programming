#include "lists.h"
#include <string.h>
/**
 * add_dnodeint - Entry point
 * Desc: add_dnodeint function
 * @head: pointer to pointer dlistint_t type
 * @n: const int type
 * Return: Address of the new element
 **/
dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	new = malloc(sizeof(dlistint_t));

	if (new == NULL)
		return (NULL);

	if (*head == NULL)
	{
		new->n = n;
		new->next = NULL;
		new->prev = NULL;
		*head = new;
		return (new);
	}

	new->n = n;
	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;
	return (new);
}
