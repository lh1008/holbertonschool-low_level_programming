#include "lists.h"
#include <string.h>
/**
 * sum_dlistint - Entry point
 * Desc: sum_dlistint function
 * @head: pointer to dlistint_t
 * Return: Function that returns the sum of all data(n)
 **/
int sum_dlistint(dlistint_t *head)
{
	dlistint_t *data_node = head;
	int sum = 0;


	if (head == NULL)
		return (0);

	while (data_node != NULL)
	{
		sum += data_node->n;
		data_node = data_node->next;
	}
	return (sum);
}
