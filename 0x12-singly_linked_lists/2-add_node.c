#include "lists.h"
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

	while (head == NULL)
