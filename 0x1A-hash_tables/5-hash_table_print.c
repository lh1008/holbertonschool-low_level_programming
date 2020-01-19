#include "hash_tables.h"

/**
 * hash_table_print - Entry point
 * Desc: hash_table_print function
 * @ht: hash_table_t
 * Return: Function that prints a hash table.
 **/
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int pos = 0, n_pos = 0;
	hash_node_t *node, *nodes[1024];

	printf("{");
	while (pos < ht->size)
	{
		node = ht->array[pos];
		while (node)
		{
			nodes[n_pos] = node;
			n_pos++;
			node =  node->next;
		}
		pos++;
	}
	pos = 0;
	while (nodes[pos])
	{
		printf("'%s': '%s'", nodes[pos]->key, nodes[pos]->value);
		if (nodes[pos + 1])
			printf(", ");
		pos++;
	}
	printf("}\n");
}
