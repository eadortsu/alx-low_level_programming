#include "lists.h"

/**
 * add_nodeint - entry point
 * @head: list to fill
 * @n: number to enter at the list
 * Return: element of list
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	/* pointer for create a new node */
	listint_t *new_n;
	/* Allocate memory to new_n */
	new_n = (listint_t *) malloc(sizeof(listint_t));
	/* If fails allocate return NULL */
	if (new_n == NULL)
		return (NULL);
	/* Enter data to new node */
	new_n->n = n;
	new_n->next = (*head);
	/* copying list a **head */
	(*head) = new_n;
	return ((*head));
}
