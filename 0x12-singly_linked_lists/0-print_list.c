#include "lists.h"

/**
 * print_list - prints all the elements of a list_t list
 * @h: pointer to struct type list_s
 *
 * Return: number of nodes
 */

size_t print_list(const list_t *h)
{
	h->len = 0;

	while (h->next != NULL)
	{
		if (h->str == NULL)
			printf(0);
		printf("%c\n", h->str);
		h->len++;
		h = h->next;
	}
	return (h->len);
}
