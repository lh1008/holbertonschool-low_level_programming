#include "lists.h"
#include <string.h>
/**
 * add_node - Entry point
 * Desc: add_node function
 * @head: pointer to list_t
 * @str: pointer to const char
 * Return: Function that adds a new node.
 **/
list_t *add_node(list_t **head, const char *str)
{
	char *target = strdup(str);
	list_t *var;
	int counter = 0;

	var = malloc(sizeof(list_t));

	if (var == NULL)
	{
		return (var);
	}
	if  (target == NULL)
	{
		free(var);
		return (NULL);
	}

	while (target[counter] != '\0')
	{
		counter++;
	}

	(*var).str = target;
	(*var).len = counter;
	(*var).next = *head;
	*head = var;
	return (*head);
}
