#include "lists.h"

/**
* sum_dlistint - calculates sum of all the data
* @head: pointer to the HEAD of the dlist
*
* Return: sum of all the data (n), if list is empty return 0
*/
int sum_dlistint(dlistint_t *head)
{
int sum = 0;

while(head)
{
sum += head->n;
head = head->next;
}

return (sum);
}
