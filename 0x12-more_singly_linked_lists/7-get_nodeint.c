#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - Removes nth node in listint_t list.
 * @head: pointer to head node
 *
 * Return: nth node, given an index, or NULL.
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int i;

	if (head != NULL)
	{
		for (i = 0; i < index; i++)
		{
			if (head == NULL)
			{
				return (NULL);
			}
			head = head->next;
		}
		return (head);
	}
	return (NULL);
}
