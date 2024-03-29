#include "hash_tables.h"

/**
 * hash_table_create -> create hash table
 * @size: sixe of the hash table
 * Return: the new hash table
 */
unsigned long int main()
{
	hash_table_t *hash_table_create(unsigned long int size)
	{
		hash_table_t *HashTable;

		HashTable = malloc(sizeof(hash_table_t));
		if (HashTable == NULL)
			return (NULL);

		HashTable->size = size;
		/*allocating memory for array*/
		HashTable->array = malloc(sizeof(hash_node_t *) * size);
		if (HashTable->array == NULL)
		{
			free(HashTable->array);
			return (NULL);
		}
		return (HashTable);
	}
}
