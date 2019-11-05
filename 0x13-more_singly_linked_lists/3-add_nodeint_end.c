#include "lists.h"
#include <string.h>
/**
 * add_nodeint_end - Entry point
 * Desc: add_nodeint_end function
 * @head: pointer to listint_t
 * @n: const int
 * Return: Function that adds a new node at the end.
 **/
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *jar, *end;

	jar = malloc(sizeof(listint_t));
	if (jar == NULL)
	{
		free(jar);
		return (jar);
	}

	(*jar).n = n;
	(*jar).next = NULL;
	if (*head == NULL)
	{
		*head = jar;
	}
	else
	{
		end = *head;
		while ((*end).next != NULL)
			end = (*end).next;
		(*end).next = jar;
	}
	return (jar);
}
