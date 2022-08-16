#include <stdio.h>
#include "lists.h"

/**
 * print_list - prints all the elements in list_t list
 * @h: pointer to a list_t sturcture defined in the header file
 *
 * Return: node
 */

size_t print_list(const list_t *h)
{
	const list_t *current;
	size_t c;

	c = 0;
	current = h;
	while (current != NULL)
	{
		printf("[%d] %s\n", current->len, current->str);
		current = current->next;
		c++;
	}
	return (c);
}
