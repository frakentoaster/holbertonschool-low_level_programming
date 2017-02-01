#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 - Frees all blocks used in listint_t list.
 * @head: pointer to head node pointer
 *
 * Description: Iterates a linked list freeing each block & sets head to NULL.
 */
void free_listint2(listint_t **head)
{
	listint_t *temp;
	listint_t *curr;

	curr = *head;
	while (curr != NULL)
	{
		temp = curr;
		curr = curr->next;
		free(temp);
	}
	*head = NULL;
}
