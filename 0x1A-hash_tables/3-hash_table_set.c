#include "hash_tables.h"

/**
 * hash_table_set - Entry point
 * Desc: hash_table_set function
 * @ht: hash_table_t
 * @key: const char
 * @value: const char
 * Return: Function that adds an element to the hash table.
 **/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *node, *new_node;

	if (key == NULL || value == NULL || ht == NULL)
		return (0);
	if (strlen(key) == 0)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(key, (const char *) (node->key)) == 0)
		{
			free(node->value);
			node->value = strdup(value);
			if (node->value == NULL)
				return (0);
			return (1);
		}
		node = node->next;
	}
	new_node = malloc(sizeof(hash_table_t));
	if (new_node == NULL)
		return (0);
	new_node->key = (char *)key;
	new_node->value = strdup(value);
	if (!new_node->key || !new_node->value)
		return (0);
	new_node->next = ht->array[index];
	ht->array[index] = new_node;
	return (1);
}
