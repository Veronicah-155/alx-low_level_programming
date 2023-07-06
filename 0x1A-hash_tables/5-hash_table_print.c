#include "hash_tables.h"

/**
 * hash_table_print - Prints the contents of a hash table
 * @ht: The hash table
 */
void hash_table_print(const hash_table_t *ht)
{
	hash_node_t *new_ht;
	unsigned long int i;
	int first = 1;

	if (ht == NULL)
		return;

	printf("{");
	for (i = 0; i < ht->size; i++)
	{
		new_ht = ht->array[i];
		while (new_ht != NULL)
		{
			if (!first)
				printf(", ");
			printf("'%s': '%s'", new_ht->key, new_ht->value);
			first = 0;
			new_ht = new_ht->next;
		}
	}
	printf("}\n");
}
