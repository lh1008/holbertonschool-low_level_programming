#include "lists.h"
#include <string.h>
#include <stdlib.h>
/**
 * sum_listint - Entry point
 * Desc: sum_listint function
 * @head: pointer to listint_t
 * Return: Function that returns the sum data(n)
 **/
int sum_listint(listint_t *head)
{
	listint_t *jar = head;
	int sum;


	if (head == NULL)
		return (0);

	while (jar != NULL)
	{
		sum += (*jar).n;
		jar = (*jar).next;
	}
	return (sum);
}
