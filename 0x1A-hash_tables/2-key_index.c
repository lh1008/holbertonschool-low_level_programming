#include "hash_tables.h"

/**
 * key_index - Entry point
 * Desc: key_index function
 * @key: const unsigned char
 * @size: unsigned long int
 * Return: Function that gives you the index of a key
 **/
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
