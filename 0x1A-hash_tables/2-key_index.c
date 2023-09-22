#include "hash_tables.h"

/**
 * __key_index - gives index of a key
 * @key: key
 * @size: size of hash table array
 * Return: index where key/value pair is stored in hash table array
 */
ulint __key_index(const unsigned char *key, ulint size)
{
	ulint idx;

	if (size == 0)
		return (0);

	idx = hash_djb2(key);
	return (idx % size);
}
