#include "hash_tables.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

/**
 * hash_table_get - Retrieves a value associated with a key
 * @ht: Pointer to the hash table
 * @key: Key for which value is to be rectrieved
 *
 * Return: Value associated with the element, or NULL if key couldn't be found
 */
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	hash_node_t *item;
	unsigned long int index;

	if (!ht || !key || !key[0])
		return (NULL);

	if (!ht->array)
	{
		fprintf(stderr, "Create and set hash table before getting\n");
		return (NULL);
	}

	index = key_index((const unsigned char *)key, ht->size);
	item = ht->array[index];

	while (item)
	{
		if (strcmp(item->key, key) == 0)
			return (item->value);
		item = item->next;
	}

	/* key does not exist */
	return (NULL);
}
