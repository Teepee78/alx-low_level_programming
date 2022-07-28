#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: hash table to be updated
 * @key: key
 * @value: value associated with the key
 * Return: 1 if it succeeded, else 0
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int idx;
	hash_node_t *node;

	if (ht == NULL) /* hash table is empty */
		return (0);
	/* key is null or empty, value is null */
	if (key == NULL || strlen(key) == 0 || value == NULL)
		return (0);
	idx = key_index((unsigned char *)key, ht->size);
	/* create node */
	node = malloc(sizeof(hash_node_t));
	if (node == NULL)
		return (0);
	node->key = malloc(sizeof(char *) * strlen(key));
	if (node->key == NULL)
	{
		free(node);
		return (0);
	}
	strcpy(node->key, key);
	node->value = malloc(sizeof(char *) * strlen(value));
	if (node->value == NULL)
	{
		free(node->key), free(node);
		return (0);
	}
	strcpy(node->value, value); /* copy value */

	/* check for collision */
	if (ht->array[idx] != NULL) /* index is not empty */
	{
		node->next = ht->array[idx];
		ht->array[idx] = node;
	} else /* index is empty */
	{
		node->next = NULL;
		ht->array[idx] = node;
	}

	return (1);
}
