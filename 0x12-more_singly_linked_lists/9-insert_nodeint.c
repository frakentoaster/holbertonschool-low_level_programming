#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a node at a given index in linked list.
 * @head: pointer to head node pointer
 * @idx: position to insert new node
 * @n: value of new node
 *
 * Return: the the address of new node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	listint_t *current_node;
	listint_t *new_node;
	unsigned int i;

	current_node = *head;
	new_node = malloc(sizeof(listint_t));
	if (new_node != NULL || (*head == NULL && idx > 0))
	{
		if (idx == 0)
		{
			new_node->n = n;
			new_node->next = *head;
			*head = new_node;
			return (new_node);
		}
		for (i = 0; i < idx - 1; i++)
		{
			if (current_node == NULL)
			{
				return (NULL);
			}
			current_node = current_node->next;
		}
		if (current_node->next == NULL)
		{
			new_node->n = n;
			current_node->next = new_node;
			return (new_node);
		}
		new_node->n = n;
		new_node->next = current_node->next;
		current_node->next = new_node;
		return (new_node);
	}
	return (NULL);
}
