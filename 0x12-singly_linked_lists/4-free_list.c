#include "lists.h"
#include <string.h>
/**
 * free_list - Entry point
 * Desc: free_list function
 * @head: pointer to list_t
 * Return: Function that frees a list.
 **/
void free_list(list_t *head)
{
	list_t *jar;

	if (head != NULL)
	{
		while ((*head).next != NULL)
		{
			jar = head;
			head = (*head).next;
			free((*jar).str);
			free(jar);
		}
		free((*head).str);
		free(head);
	}
}
