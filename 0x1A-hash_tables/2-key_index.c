#include "hash_tables.h"

/**
 * key_index - Gives you the index of a key.
 * @key: The key to be hashed.
 * @size: The size of the array of the hash table.
 *
 * Return: index of the key stored in the array of the hash table.
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	unsigned long int hash_code;

	if (key == NULL || size == 0)
		return (0);

	/* Calculate the hash code using hash_djb2 */
	hash_code = hash_djb2(key);

	/* Use modulo to ensure the index is within the valid range */
	return (hash_code % size);
}
