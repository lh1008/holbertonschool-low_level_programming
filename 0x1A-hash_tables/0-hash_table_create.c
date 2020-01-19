#include "hash_tables.h"

/**
 * hash_table_create - Entry point
 * Desc: hash_table_create function
 * @size: unsigned long int type
 * Return: Functions that creates a hash table
 **/
hash_table_t *hash_table_create(unsigned long int size)
{
	hash_table_t *table;

	if (size == 0)
		return (NULL);

	table = malloc(sizeof(hash_table_t));
	if (table == NULL)
		return (NULL);

	table->size = size;
	table->array = (hash_node_t**)malloc(sizeof(hash_node_t)* size);
	return (table);

}
