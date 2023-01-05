#include "hash_tables.h"
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/**
 * hash_table_set - Adds an element to the hash table
 * @ht: Pointer to the hash table
 * @key: Key for the value
 * @value: Value associated with the @key
 *
 * Return: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	int reval;
	hash_node_t **tempNode = NULL;

	if (!ht || !ht->array || !key || !key[0] || !value)
		return (0);

	index = key_index((const unsigned char *)key, ht->size);
	tempNode = &(ht->array[index]);

	if (*tempNode == NULL)
	{
		*tempNode = malloc(sizeof(hash_node_t));
		if (!*tempNode)
			return (0);

		(*tempNode)->key = strdup(key);
		(*tempNode)->value = strdup(value), (*tempNode)->next = NULL;
		return (1);
	}

	if (strcmp((*tempNode)->key, key) == 0)
	{
		free((*tempNode)->value), (*tempNode)->value = strdup(value);
		return (1);
	}

	reval = handleCollision(tempNode, key, value);

	return (reval);
}

/**
 * handleCollision - Handles collisions
 * @tempNodeHead: Address of the first node in the chain
 * @key: Key to associate with the value
 * @value: Value to associate with @key
 *
 * Return: 1 if successful, 0 otherwise
 */
int handleCollision(hash_node_t **tempNodeHead, const char *key,
		const char *value)
{
	hash_node_t *tempNode = (*tempNodeHead)->next, *new;

	while (tempNode)
	{
		if (strcmp(tempNode->key, key) == 0)
		{
			free(tempNode->value), tempNode->value = strdup(value);
			return (1);
		}
		tempNode = tempNode->next;
	}

	new = malloc(sizeof(hash_node_t));
	if (!new)
		return (0);

	new->key = strdup(key);
	new->value = strdup(value);
	new->next = *tempNodeHead;
	*tempNodeHead = new;

	return (1);
}
