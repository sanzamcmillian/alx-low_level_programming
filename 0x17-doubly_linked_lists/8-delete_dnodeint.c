#include "lists.h"

/**
 *int delete_dnodeint_at_index - deletes the node at index of a dlistint_t linked list
 *
 *@head: head of the list
 *@index: index of the new node
 *Return: 1 on success or -1 if failed
 */

int delete_dnodeint_at_index(dlistint_t **head, unsigned int index)
{
	dlistint_t *h1;
	dlistint_t *h2;
	unsigned int i = 0;

	h1 = *head;
	if (h1 != NULL)
		while (h1->prev != NULL)
			h1 = h1->prev;
	while(h1 != NULL)
	{
		if (index == i)
		{
			if (i == 0)
			{
				*head = h1->next;
				if (*head != NULL)
					(*head)->prev = NULL;
			}
			else
			{
				h2->next = h1->next;

				if (h1->next != NULL)
					h1->next->prev = h2;
			}
			free(h1);
			return (1);
		}
		h2 = h1;
		h1 = h1->next;
		i++;
	}
	return (-1);
}
