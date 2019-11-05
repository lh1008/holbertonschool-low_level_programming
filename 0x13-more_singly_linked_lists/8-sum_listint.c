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
	int sum;


	if (head == NULL)
		return (0);

	while (head != NULL)
	{
		sum += (*head).n;
		head = (*head).next;
	}
	return (sum);
}
