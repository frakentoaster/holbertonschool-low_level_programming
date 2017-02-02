#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - Deletes a node at a given index in linked list.
 * @head: pointer to head node pointer
 * @index: position from which to remove a node
 *
 * Return: 1 is successful and -1 for failures.
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *current_node;
	listint_t *temp_node;
	unsigned int i;

	current_node = *head;
	if (*head != NULL)
	{
		if (index == 0 && current_node->next == NULL)
		{
			*head = NULL;
			free(current_node);
			return (1);
		}
		for (i = 0; i < index - 1; i++)
		{
			if (current_node == NULL)
			{
				return (-1);
			}
			if (index == 0)
			{
				*head = current_node->next;
				free(current_node);
				return (1);
			}
			current_node = current_node->next;
		}
		temp_node = current_node->next;
		current_node->next = current_node->next->next;
		free(temp_node);
		return (1);
	}
	return (-1);
}
