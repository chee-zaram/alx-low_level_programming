#include "lists.h"

/**
 * free_list - Function that frees a list_t list.
 * @head: Pointer to first node in list.
 *
 * Return: No return value.
 */
void free_list(list_t *head)
{
	if (head)
	{
		if (head->str)
			free(head->str);
		free_list(head->next);
		free(head);
	}
}

