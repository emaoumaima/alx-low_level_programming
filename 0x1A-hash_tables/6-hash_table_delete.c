#include "hash_tables.h"
/**
 *hash_table_delete - deletes a hash table
 *@ht: the hash table
 *
 *Return: void
 */
void hash_table_delete(hash_table_t *ht)
{
	hash_node_t *temp;
	unsigned long int i = 0;

	if (ht == NULL)
		return;

	while (i < ht->size)
	{
		while (ht->array[i] != NULL)
		{
			temp = ht->array[i];
			free(temp->key);
			free(temp->value);
			ht->array[i] = ht->array[i]->next;
			free(temp);
		}
		i++;
	}
	free(ht->array);
	free(ht);
}
