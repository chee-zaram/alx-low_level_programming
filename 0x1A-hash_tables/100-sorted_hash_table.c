#include "hash_tables.h"
#include <stdlib.h>
#include <string.h>
#include <stdio.h>

/**
 * shash_table_create - Creates a sorted hash table
 * @size: Size of the sorted hash table
 *
 * Return: A pointer to the sorted hash table
 */
shash_table_t *shash_table_create(unsigned long int size)
{
	shash_table_t *sortedTable;

	if (size == 0)
		return (NULL);

	sortedTable = malloc(sizeof(shash_node_t *) * size);
	if (!sortedTable)
		return (NULL);

	sortedTable->size = size;
	sortedTable->currSize = 0;
	sortedTable->array = calloc(size, sizeof(shash_table_t *));
	if (!sortedTable->array)
	{
		free(sortedTable);
		return (NULL);
	}

	sortedTable->shead = NULL;
	sortedTable->stail = NULL;

	return (sortedTable);
}

/**
 * shash_table_set - Sets key/value pairs in the sorted hash table
 * @ht: Pointer to the sorted hash table
 * @key: Key to be added
 * @value: Value to be associated to the @key
 *
 * Return: 1 if successful, 0 otherwise
 */
int shash_table_set(shash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	shash_node_t **arBuckets = NULL;

	if (!ht || !ht->array || !key || !key[0] || !value)
		return (0);

	if (ht->currSize == ht->size)
		return (0);

	index = key_index((unsigned const char *)key, ht->size);
	arBuckets = &(ht->array[index]);
	if (!*arBuckets)
		return (addKeyForNullBuckets(arBuckets, ht, key, value));

	if (strcmp((*arBuckets)->key, key) == 0)
		return (updateValue(arBuckets, value));

	return (handleSortedCollision(ht, arBuckets, key, value));
}

/**
 * handleSortedCollision - Chains buckets when a collision occurs
 * @ht: Pointer to the sorted hash table
 * @arBuckets: Address of the pointer to the first bucket
 * @key: Key to add to sorted table
 * @value: Value associated with @key
 *
 * Return: Returns 1 if successful, 0 otherwise
 */
int handleSortedCollision(shash_table_t *ht, shash_node_t **arBuckets,
		const char *key, const char *value)
{
	shash_node_t *tempBucket = (*arBuckets)->next;
	shash_node_t *newBucketHead = NULL;

	while (tempBucket)
	{
		if (strcmp(tempBucket->key, key) == 0)
		{
			free(tempBucket->value);
			tempBucket->value = strdup(value);
			if (!tempBucket->value)
				return (0);

			return (1);
		}
		tempBucket = tempBucket->next;
	}

	newBucketHead = malloc(sizeof(shash_node_t));
	if (!newBucketHead)
		return (0);

	newBucketHead->key = strdup(key);
	if (!newBucketHead->key)
		return (0);

	newBucketHead->value = strdup(value);
	if (!newBucketHead->value)
		return (0);

	newBucketHead->next = *arBuckets;
	newBucketHead->sprev = NULL;
	newBucketHead->snext = NULL;
	*arBuckets = newBucketHead;

	findSortedPosition(ht, *arBuckets);
	ht->currSize++;
	return (1);
}

/**
 * updateValue - Updates the value of a key in a sorted hash table
 * @arBuckets: Address of the pointer to the first bucket
 * @value: Value to be associated with key
 *
 * Return: Returns 1 if successful, 0 otherwise
 */
int updateValue(shash_node_t **arBuckets, const char *value)
{
	if (strcmp((*arBuckets)->value, value) == 0)
		return (1);

	free((*arBuckets)->value);
	(*arBuckets)->value = strdup(value);
	if (!(*arBuckets)->value)
		return (0);

	return (1);
}

/**
 * addKeyForNullBuckets - Adds a key to a free index in the table
 * @arBuckets: Address of the pointer to the first bucket at the index
 * @ht: Pointer to the sorted hash table
 * @key: Key to add to table
 * @value: Value associated with @key
 *
 * Return: 1 if successful, 0 otherwise
 */
int addKeyForNullBuckets(shash_node_t **arBuckets, shash_table_t *ht,
		const char *key, const char *value)
{
	*arBuckets = malloc(sizeof(shash_node_t));
	if (!*arBuckets)
		return (0);

	(*arBuckets)->key = strdup(key);
	if (!(*arBuckets)->key)
	{
		free(*arBuckets);
		*arBuckets = NULL;
		return (0);
	}

	(*arBuckets)->value = strdup(value);
	if (!(*arBuckets)->value)
	{
		free(*arBuckets);
		*arBuckets = NULL;
		free((*arBuckets)->key);
		(*arBuckets)->key = NULL;
		return (0);
	}

	(*arBuckets)->next = NULL;
	(*arBuckets)->sprev = NULL;
	(*arBuckets)->snext = NULL;

	if (ht->shead == NULL)
		ht->shead = *arBuckets, ht->stail = *arBuckets;
	else
		findSortedPosition(ht, *arBuckets);
	ht->currSize++;

	return (1);
}

/**
 * findSortedPosition - Finds a position to insert bucket in the sorted table
 * @ht: Pointer to the sorted hash table
 * @newBucket: Pointer to the bucket to insert
 */
void findSortedPosition(shash_table_t *ht, shash_node_t *newBucket)
{
	shash_node_t *tempKeyNode = ht->shead;

	if ((!tempKeyNode->sprev) && (strcmp(newBucket->key, tempKeyNode->key) < 0))
	{
		tempKeyNode->sprev = newBucket, newBucket->snext = tempKeyNode;
		ht->shead = newBucket;
		return;
	}

	while (strcmp(newBucket->key, tempKeyNode->key) > 0)
	{
		if (tempKeyNode->snext == NULL)
		{
			tempKeyNode->snext = newBucket, newBucket->sprev = tempKeyNode;
			ht->stail = newBucket;
			return;
		}
		tempKeyNode = tempKeyNode->snext;
	}

	newBucket->sprev = tempKeyNode->sprev;
	tempKeyNode->sprev->snext = newBucket;
	newBucket->snext = tempKeyNode;
	tempKeyNode->sprev = newBucket;
}

/**
 * shash_table_get - Retrieves the value associated with a key
 * @ht: Pointer to the sorted hash table
 * @key: Key associated with value to be retrieved
 *
 * Return: Value, or NULL if failed
 */
char *shash_table_get(const shash_table_t *ht, const char *key)
{
	shash_node_t *tempBucket = NULL;
	unsigned long int index;

	if (!ht || !ht->array || !key || !key[0])
		return (NULL);

	index = key_index((unsigned const char *)key, ht->size);
	tempBucket = ht->array[index];

	while (tempBucket)
	{
		if (strcmp(tempBucket->key, key) == 0)
			return (tempBucket->value);

		tempBucket = tempBucket->next;
	}
	return (NULL);
}

/**
 * shash_table_print - Prints the sorted hash table
 * @ht: Pointer to the sorted hash table
 */
void shash_table_print(const shash_table_t *ht)
{
	shash_node_t *tempBucket;

	if (!ht || !ht->array)
		return;

	tempBucket = ht->shead;

	printf("{");
	while (tempBucket)
	{
		printf("'%s': '%s'", tempBucket->key, tempBucket->value);
		tempBucket = tempBucket->snext;
		while (tempBucket)
		{
			printf(", ");
			printf("'%s': '%s'", tempBucket->key, tempBucket->value);
			tempBucket = tempBucket->snext;
		}
	}
	printf("}\n");
}

/**
 * shash_table_print_rev - Print the sorted hash table in reverse order
 * @ht: Pointer to the sorted hash table
 */
void shash_table_print_rev(const shash_table_t *ht)
{
	shash_node_t *tempBucket;

	if (!ht || !ht->array)
		return;

	tempBucket = ht->stail;

	printf("{");
	while (tempBucket)
	{
		printf("'%s': '%s'", tempBucket->key, tempBucket->value);
		tempBucket = tempBucket->sprev;
		while (tempBucket)
		{
			printf(", ");
			printf("'%s': '%s'", tempBucket->key, tempBucket->value);
			tempBucket = tempBucket->sprev;
		}
	}
	printf("}\n");
}

/**
 * shash_table_delete - Deletes the hash table
 * @ht: Pointer to the hash table
 */
void shash_table_delete(shash_table_t *ht)
{
	shash_node_t *tempBucket, *bucket;

	if (!ht)
		return;

	bucket = ht->shead;
	while (bucket)
	{
		free(bucket->key);
		bucket->key = NULL;

		free(bucket->value);
		bucket->value = NULL;

		tempBucket = bucket->snext;
		free(bucket);
		bucket = tempBucket;
	}

	free(ht->array);
	ht->array = NULL;
	free(ht);
	ht = NULL;
}
