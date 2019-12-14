#include "lists.h"
#include <string.h>
/**
 * free_dlistint - Entry point
 * Desc: free_dlistint function
 * @head: pointer dlistint_t type
 * Return: Address of the new end element
 **/
void free_dlistint(dlistint_t *head)
{
	dlistint_t *jar;

	if (head != NULL)
	{
		while (head != NULL)
		{
			jar = head;
			head = head->next;
			free(jar);
		}
		free(head);
	}
}
