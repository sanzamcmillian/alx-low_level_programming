#include "lists.h"

/**
 *sum_dlistint - sum of all the data(n) of a dlistint_t linked list
 *
 *@head: pointer to the head of the linked list
 *Return: sum or 0 if list empty
 */

int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	if (head != NULL)
	{
		while (head->prev != 0)
			head = head->prev;

		while (head != NULL)
		{
			sum += head->n;
			head = head->next;
		}
	}
	return (sum);
}
