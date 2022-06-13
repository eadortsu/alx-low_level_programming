#include "lists.h"
#include <stdio.h>
/**
 * list_len - a function that prints all the elements of a list
 * @h:pointer to first node
 * Return: number of nodes in the list
 */
size_t list_len(const list_t *h)
{
const list_t *temp;
unsigned int count = 0;
temp = h;
while (temp)
{
if (temp->str != NULL)
count++;
temp = temp->next;
}
return (count);
}
