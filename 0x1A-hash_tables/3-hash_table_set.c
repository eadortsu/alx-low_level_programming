#include "hash_tables.h"

/**
* make_hash_node - creates a new hash node
* @key: key of the node
* @value: value of the node
*
* Return: the new node, or NULL on failure
*/
hash_node_t *make_hash_node(const char *key, const char *value)
{
hash_node_t *node;

node = malloc(sizeof(hash_node_t));
if (node == NULL)
return (NULL);
node->key = strdup(key);
if (node->key == NULL)
{
free(node);
return (NULL);
}
node->value = strdup(value);
if (node->value == NULL)
{
free(node->key);
free(node);
return (NULL);
}

node->next = NULL;
return (node);
}

/**
* hash_table_set - adds an element to the hash table
* @ht: the hash table you want to add or update the key/value to
* @key: the key. Cannot be empty
* @value: value associated with the key. must be duplicated.
*         can be an empty string
*
* Return: 1 if it succeeded, 0 otherwise
*/
int hash_table_set(hash_table_t *ht, const char *key, const char *value)
{
unsigned long int index;
hash_node_t *hash_node, *temp;
char *new_value;

if (ht == NULL || ht->array == NULL || ht->size == 0
|| key == NULL || strlen(key) == 0 || value == NULL)
return (0);

index = key_index((const unsigned char *)key, ht->size);
temp = ht->array[index];
while (temp != NULL)
{
if (strcmp(temp->key, key) == 0)
{
new_value = strdup(value);
if (new_value == NULL)
return (0);
free(temp->value);
temp->value = new_value;
return (1);
}
temp = temp->next;
}

hash_node = make_hash_node(key, value);
if (hash_node == NULL)
return (0);
hash_node->next = ht->array[index];
ht->array[index] = hash_node;
return (1);
}
