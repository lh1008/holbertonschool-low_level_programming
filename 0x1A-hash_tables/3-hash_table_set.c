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
	hash_node_t **array, *new_node;

	if (key == NULL || value == NULL)
		return (0);
	index = key_index((const unsigned char *)key, ht->size);
	array = ht->array;
	if (!array[index])
	{
		new_node = malloc(sizeof(hash_table_t));
		if (new_node == NULL)
			return (0);
		new_node->key = (char *)key;
		new_node->value = strdup(value);
		array[index] = new_node;
	}
	else
	{
		if (strcmp(key, (const char *) (array[index])->key) == 0)
		{
			free((array[index])->value);
			(array[index])->value = strdup(value);
		}
		else
		{
			new_node = malloc(sizeof(hash_table_t));
			if (new_node == NULL)
				return (0);
			new_node->key = (char *)key;
			new_node->value = strdup(value);
			new_node->next = array[index];
			array[index] = new_node;
		}
	}
	return (1);
}
