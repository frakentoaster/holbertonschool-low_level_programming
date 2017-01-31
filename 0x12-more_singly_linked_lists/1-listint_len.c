#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - return linked list count.
 * @h: head node
 *
 * Return: the number of elements in a linked list.
 */
size_t listint_len(const listint_t *h)
{
	size_t node_cnt;

	node_cnt = 0;

	while (h != NULL)
	{
		h = h->next;
		node_cnt++;
	}

	return (node_cnt);
}
