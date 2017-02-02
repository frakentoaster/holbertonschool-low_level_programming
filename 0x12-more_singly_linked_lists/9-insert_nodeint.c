#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * insert_nodeint_at_index - Inserts a node at a given index in linked list.
 * @head: pointer to head node pointer
 * @index: position to insert new node
 * @n: value of new node
 *
 * Return: the the address of new node or NULL.
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int index, int n)
{
	listint_t *temp_node;
	listint_t *current_node;
	listint_t *new_node;
	unsigned int i;

	current_node = *head;
	new_node = malloc(sizeof(listint_t));
	for (i = 0; i < index; i++)
	{
		if (current_node == NULL)
		{
			return (NULL);
		}
		temp_node = current_node;
		current_node = current_node->next;
	}
	new_node->n = n;
	new_node->next = current_node;
	temp_node->next = new_node;
	return (current_node);
}
