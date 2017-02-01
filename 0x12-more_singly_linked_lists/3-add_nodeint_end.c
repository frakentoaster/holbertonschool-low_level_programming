#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * add_nodeint_end - Adds a new node to the end of a linked list.
 * @head: pointer to head node pointer
 * @n: new node value
 *
 * Return: the address of the new element, or NULL if it failed.
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *tail_node;
	listint_t *current_node;

	current_node = *head;
	tail_node = malloc(sizeof(listint_t));
	tail_node->n = n;
	tail_node->next = NULL;

	if (tail_node == NULL)
	{
		return (NULL);
	}
	else if (current_node == NULL)
	{
		*head = tail_node;
	}
	else
	{
		while (current_node->next != NULL)
		{
			current_node = current_node->next;
		}
		current_node->next = tail_node;
	}
	return (tail_node);
}
