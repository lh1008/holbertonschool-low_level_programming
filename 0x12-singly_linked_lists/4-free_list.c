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

	while (head != NULL)
	{
		jar = head;
		head = (*head).next;
		free(jar);
	}
	free(head);
}
