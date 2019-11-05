#include "lists.h"
#include <string.h>
/**
 * add_node_end - Entry point
 * Desc: add_node_end function
 * @head: pointer to list_t
 * @str: pointer to const char
 * Return: Function that adds a new node at the end.
 **/
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *var, *end;
	int counter = 0;

	var = malloc(sizeof(list_t));
	if (var == NULL)
		return (NULL);

	while (str[counter] != '\0')
		counter++;

	(*var).str = strdup(str);
	(*var).len = counter;
	(*var).next = NULL;
	if (*head == NULL)
	{
		*head = var;
	}
	else
	{
		end = *head;
		while ((*end).next != NULL)
			end = (*end).next;
		(*end).next = var;
	}
	return (var);
}
