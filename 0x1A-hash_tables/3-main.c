#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "hash_tables.h"

/**
 * main - check the code for Holberton School students.
 *
 * Return: Always EXIT_SUCCESS.
 */
int main(void)
{
	hash_table_t *ht;
	unsigned long int index;

	ht = hash_table_create(1024);
	hash_table_set(ht, "betty", "holberton");
	printf("{ key : %s, value : %s}\n", (ht->array[173])->key, (ht->array[173])->value);
	hash_table_set(ht, "betty", "holbies");
	printf("{ key : %s, value : %s}\n", (ht->array[173])->key, (ht->array[173])->value);
	index = key_index((const unsigned char *) "ytteb", ht->size);

	hash_table_set(ht, "ytteb", "making_up");
	printf("{ key : %s, value : %s}\n", (ht->array[index])->key, (ht->array[index])->value);
	index = key_index((const unsigned char *) "hetairas", ht->size);
	hash_table_set(ht, "hetairas", "making_right");
	printf("{ key : %s, value : %s}\n", (ht->array[index])->key, (ht->array[index])->value);
	hash_table_set(ht, "mentioner", "making_down");
	printf("{ key : %s, value : %s}\n", (ht->array[0])->key, (ht->array[0])->value);
	index = key_index((const unsigned char *) "a", ht->size);
	printf("%lu\n", index);
	hash_table_set(ht,(const char *) "a", "space");
	printf("{ key : %s, value : %s}\n", (ht->array[index])->key, (ht->array[index])->value);
	printf("%lu\n", index);
	return (EXIT_SUCCESS);
}
