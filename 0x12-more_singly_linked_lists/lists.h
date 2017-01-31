#ifndef LISTS
#define LISTS
/**
 * struct listint_s - singly linked list
 * @n: integer
 * @next: points to the next node
 *
 * Description: singly linked list node structure
 * for Holberton project
 */
typedef struct listint_s
{
		int n;
		struct listint_s *next;
} listint_t;

/* Function prints all elements of listint_t list */
size_t print_listint(const listint_t *h);
/* Function returns number of elements of listint_t list */
size_t listint_len(const listint_t *h);
#endif
