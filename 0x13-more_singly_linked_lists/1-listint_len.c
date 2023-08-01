#include "lists.h"

/**
 *listint_len - return the number of elements in a linked lists
 *@h: linked list of type listint_in to go through
 *
 *Return: number of nodes
 */

size_t listint_len(const listint_t *h)
{
	size_t count = 0;

	while(h)
	{
		count++;
		h = h->next;
	}
	return (count);
}
