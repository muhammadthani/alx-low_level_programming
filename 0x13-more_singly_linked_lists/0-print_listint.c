#include "lists.h"
/**
 * print_listint - print the list of integers
 * @h: head of the list
 * Return: returns null
 */

size_t print_listint(const listint_t *h)
{
	const listint_t *cursor = h;
	size_t count = 0;

	while (cursor != NULL)
	{
		printf("%d\n", cursor->n);
		count += 1;
		cursor = cursor->next;
	}
	return (count);
}
