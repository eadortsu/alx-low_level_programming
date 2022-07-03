#include "lists.h"
#include <stdlib.h>
/**
 * *add_node - a function that adds new node at beginning
 * @head: adress of first element
 * @str: given adress
 * Return: adress of first elem
 */
list_t *add_node(list_t **head, const char *str)
{
list_t *temp;
unsigned int lengh;
temp = malloc(sizeof(size_t));
if (str == NULL)
return (NULL);
while (str[lengh])
lengh++;
temp->str = strdup(str);
temp->len = lengh;
temp->next = *head;
*head = temp;
return (*head);
}
