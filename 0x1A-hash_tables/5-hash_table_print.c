#include "hash_tables.h"

/**
* hash_table_print - prints a hash table
* @ht: table to be printed
*
* Return: nothing
*/
void hash_table_print(const hash_table_t *ht)
{
unsigned long int index;
hash_node_t *temp;
char flag = 0; /* 0 while nothing has been printed yet*/

if (ht == NULL || ht->array == NULL)
return;

printf("{");
for (index = 0; index < ht->size; index++)
{
temp = ht->array[index];
while (temp != NULL)
{
if (flag == 1)
printf(",");
printf("'%s':'%s'", temp->key, temp->value);
flag = 1;
temp = temp->next;
}
}
printf("}\n");
}
