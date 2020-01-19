#include "hash_tables.h"

/**
 * hash_table_get - Entry point
 * Desc: hash_table_get function
 * @ht: hash_table_t
 * @key: const char
 * Return: Function that retrieves a value associated with a key.
 **/
char *hash_table_get(const hash_table_t *ht, const char *key)
{
	unsigned long int index;
	hash_node_t *node;

	if (!key || !ht)
		return (NULL);

	index = key_index((const unsigned char *)key, ht->size);
	node = ht->array[index];

	while (node)
	{
		if (strcmp(key, (const char *) (node->key)) == 0)
		{
			return (node->value);
		}
		node = node->next;
	}
	return (NULL);
}
