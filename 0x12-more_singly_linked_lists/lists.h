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
/* Function adds a new node at the beginning of listint_t list */
listint_t *add_nodeint(listint_t **head, const int n);
/* Function adds a new node at the end of listint_t list */
listint_t *add_nodeint_end(listint_t **head, const int n);
/* Function that frees listint_t list memory */
void free_listint(listint_t *head);
/* Function that frees listint_t list memory and sets head to NULL */
void free_listint2(listint_t **head);
/* Function that deletes head node of listint_t linked list */
int pop_listint(listint_t **head);
/* Function that returns the nth node of listint_t linked list */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
#endif
