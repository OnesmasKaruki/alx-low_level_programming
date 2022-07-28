#include "main.h"
#include <stdlib.h>

/**
 * -calloc - allocate memory for array of nmemb
 *  @nmemb: no.of element in array
 *  @size: size of ech element
 *
 *  Return: pointer to be allocatedmemmory
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	void *ptr;
	unsigned int i;

	if (nmemb == 0 || size == 0)
		return (NULL);
	/* allocate memory for the element */
	ptr = malloc(nmembb * size);
/* if malloc fails(returns NULL), return NULL */
	if (ptr == NULL)
		return (NULL);
/* initialize the values at each index to zero */
	for (i = 0; i < (nmemb * size); i++)
		*((char *)(ptr) + i) = 0;
	return (ptr);
}
