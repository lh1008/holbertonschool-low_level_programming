#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * free_listint2 - Entry point
 * Desc: free_listint2 function
 * @head: pointer to listint_t
 * Return: Function that frees a list.
 **/
void free_listint2(listint_t **head)
{
	listint_t *jar;

	while (*head != NULL)
	{
		jar = *head;
		*head = ((*(*head)).next);
		free(jar);
	}
	free(*head);
}
