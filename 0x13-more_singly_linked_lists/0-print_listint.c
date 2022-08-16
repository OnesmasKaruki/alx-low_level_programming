#include <stdio.h>
#include "list.h"

/**
 * print_list - prints all the elements in list_t list
 * @h: pointer to a list_t sturcture defined in the header file
 *
 * Return: nodes
 */

size_t print_list(const list_t *h)
{
	int i;

	i = 0;
	while (h != NULL)
	{
		if (h->str == NULL)
		{
			printf("[0] (nil)\n");
			h = h->next;
			i++;
		}
		printf("[%d] %s\n", h->len, h->str);
		h = h->next;

		i++;
	}
	return (i);
}
