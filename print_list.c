#include <stdio.h>
#include "sort.h"

/**
 * print_list - Prints a doubly linked list of integers
 * @list: Pointer to the head of the list
 *
 * Description: Numbers are separated by commas and a space.
 * A newline is printed at the end.
 */
void print_list(const listint_t *list)
{
	const listint_t *node;

	node = list;
	while (node)
	{
		printf("%d", node->n);
		if (node->next)
			printf(", ");
		node = node->next;
	}
	printf("\n");
}
