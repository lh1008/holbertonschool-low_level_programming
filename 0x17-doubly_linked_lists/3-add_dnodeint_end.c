#include "lists.h"
#include <string.h>
/**
 * add_dnodeint_end - Entry point
 * Desc: add_dnodeint_end function
 * @head: pointer to pointer dlistint_t type
 * @n: const int type
 * Return: Address of the new end element
 **/
dlistint_t *add_dnodeint_end(dlistint_t **head, const int n)
{
	dlistint_t *end, *go;

	go = *head;

	end = malloc(sizeof(dlistint_t));

	if (end == NULL)
		return (NULL);

	if (go == NULL)
	{
		end->n = n;
		end->next = NULL;
		end->prev = NULL;
		*head = end;
		return (end);
	}
	else
	{
		end->n = n;
		while (go->next != NULL)
		{
			go = go->next;
		}
		end->next = NULL;
		end->prev = go;
		go->next = end;
	}
	return (end);
}
