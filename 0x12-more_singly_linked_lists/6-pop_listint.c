#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - Removes head node in listint_t list and returns node data.
 * @head: pointer to head node pointer
 *
 * Return: the node's data or 0.
 */
int pop_listint(listint_t **head)
{
	listint_t *curr;
	int n;

	if (*head != NULL)
	{
		curr = *head;
		n = curr->n;
		*head = curr->next;
		free(curr);
		return (n);
	}
	return (0);
}
