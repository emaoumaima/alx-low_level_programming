#include "hash_tables.h"
/**
 *hash_table_print - prints a hash table in the order they appear
 *in the hash table array
 *@ht: pointer to the hash table
 *
 *Return: void
 */
void hash_table_print(const hash_table_t *ht)
{
	unsigned long int iterator = 0;
	hash_node_t *node;
	int multiplenodes = 0;

	if (ht == NULL)
		return;

	printf("{");
	while (iterator < ht->size)
	{
		node = ht->array[iterator];
		while (node != NULL)
		{
			if (multiplenodes == 0)
			{
				printf("'%s': '%s'", node->key, node->value);
				multiplenodes = 1;
			}
			else
				printf(", '%s': '%s'", node->key, node->value);
			node = node->next;
		}
		iterator++;
	}
	printf("}\n");
}
