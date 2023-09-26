#include "hash_tables.h"

/**
 * hash_table_set - adds an element to the hash table
 * @ht: is the hash table you want to add or update the key/value to
 * @key: is the key. key can not be an empty string
 * @value: is the value associated with the key.
 * Return: Returns: 1 if it succeeded, 0 otherwise
 */
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
	unsigned long int index;
	hash_node_t *temp;
	hash_node_t *hsnode;

	if (ht == NULL)
		return (0);
	if (key == NULL || key[0] == '\0')
		return (0);
	if (ht->size == 0 || ht->array == NULL)
		return (0);
	index = key_index((unsigned char *)key, ht->size);
	temp = ht->array[index];
	while (temp != NULL)
	{
		if (strcmp(temp->key, key) == 0)
		{
			free(temp->value);
			temp->value = strdup(value);
			return (1);
		}

		temp = temp->next;
	}
	hsnode = malloc(sizeof(hash_node_t));
	if (hsnode == NULL)
		return (0);
	hsnode->key = strdup(key);
	hsnode->value = strdup(value);
	if (ht->array[index] != NULL)
	{
		hsnode->next = ht->array[index];
	}
	else
		hsnode->next = NULL;
	ht->array[index] = hsnode;
	return (1);
}
