#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * print_listint - print all nodes and return node count.
 * @h: head node
 *
 * Return: the number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t node_cnt;

	node_cnt = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n);
		h = h->next;
		node_cnt++;
	}
	return (node_cnt);
}
