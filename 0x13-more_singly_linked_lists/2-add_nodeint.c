#include "lists.h"
#include <string.h>
/**
 * add_nodeint - Entry point
 * Desc: add_nodeint function
 * @head: pointer to list_t
 * @n: const int
 * Return: Function that adds a new node.
 **/
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *jar;

	jar = malloc(sizeof(listint_t));

	if (jar == NULL)
	{
		free(jar);
		return (jar);
	}
	(*jar).n = n;
	(*jar).next = *head;
	*head = jar;
	return (*head);
}
