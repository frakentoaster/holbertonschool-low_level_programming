#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * sum_listint - Sums all node data in listint_t list.
 * @head: pointer to head node
 *
 * Return: the sum of all node's data.
 */
	int sum_listint(listint_t *head)
	{
		unsigned int i;

		i = 0;
		if (head == NULL)
		{
			return (0);
		}
		while (head != NULL)
		{
			i += head->n;
			head = head->next;
	}
	return (i);
	}
