#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * pop_listint - Entry point
 * Desc: pop_listint function
 * @head: pointer of a pointer to listint_t
 * Return: Function that deletes the head node.
 **/
int pop_listint(listint_t **head)
{
	listint_t *jar;
	unsigned int var;

	var = (*(*head)).n;

	if (*head == NULL)
	{
		return (0);
	}
	else
	{
		jar = *head;
		*head = ((*(*head)).next);
		free(jar);
	}
	return (var);
}
