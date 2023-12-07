#include "lists.h"

/**
 *get_dnodeint_at_index - returns nth node of a dlistint_t linked list
 *
 *@head: pointer to the head of the list
 *@index: index of the  node to be searched starting from 0
 *Return: NULL if index does not exist or nth node
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;
	while (tmp = head)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}
