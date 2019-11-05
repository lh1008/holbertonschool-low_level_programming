#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * insert_nodeint_at_index - Entry point
 * Desc: insert_nodeint_at_index function
 * @head: pointer of a pointer to listint_t
 * @idx: unsigned int index
 * @n: int n
 * Return: Function that inserts a new node
 **/
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	int counter;
