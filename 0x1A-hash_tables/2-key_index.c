#include "hash_tables.h"
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

/**
 * key_index - the index of a key
 * @size: size of the array
 * @key: key to get the index
 * Return: index
 */
unsigned long int key_index(const unsigned char *key, unsigned long int size)
{
	return (hash_djb2(key) % size);
}
