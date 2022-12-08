#include "lists.h"

/**
 * sum_dlistint - Gets the sum of all the data (n) of a dlistint_t list.
 * @head: Head pointer.
 *
 * Return: Sum of all data, or 0 if list is empty.
 */
int sum_dlistint(dlistint_t *head)
{
	if (head)
		return (head->n + sum_dlistint(head->next));
	return (0);
}
