#include "main.h"

/**
 * print_alphabet -> prints lowercase alphabet
 */
void print_alphabet(void)
{
	int a;

	for (a = 'a'; a <= 'z'; a++)
	{
		-putchar(a);
	}
	_putchar('\n');
}
