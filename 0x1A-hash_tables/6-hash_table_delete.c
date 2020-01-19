#include "hash_tables.h"

/**
 * hash_table_delete - Entry point
 * Desc: hash_table_delete function
 * @ht: hash_table_t
 * Return: Function that deletes a hash table.
 **/
void hash_table_delete(hash_table_t *ht)
{
	unsigned long int pos = 0;
	hash_node_t *node, *next_node;

	if (ht == NULL)
		return;
	while (pos < ht->size)
	{
		node = ht->array[pos];
		while (node)
		{
			next_node = node->next;
			free(node->key);
			free(node->value);
			free(node);
			node = next_node;
		}
		pos++;
	}
	free(ht->array);
	free(ht);
}
