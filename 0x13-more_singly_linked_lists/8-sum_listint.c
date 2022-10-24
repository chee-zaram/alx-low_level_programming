#include "lists.h"

/**
 * sum_listint - Gets the sum of all the data(n) in listint_t.
 * @head: Pointer to head node.
 *
 * Return: The sum of all data (n) in the list.
 */
int sum_listint(listint_t *head)
{
	int sum = 0;

	if (head)
	{
		sum = head->n;
		sum += sum_listint(head->next);
	}
	return (sum);
}

