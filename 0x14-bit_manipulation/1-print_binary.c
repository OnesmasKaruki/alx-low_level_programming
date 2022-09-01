#include <stdio.h>
#include "main.h"

/**
 * print_binary - printts binary representation of number
 * @n: number to convert to binary
 *
 * Return: void
 */
void print_binary(unsigned long int n)
{
	int i = 0, count, k, temp;

	if (n == 0)
	{
		printf("0");
		return (0);
	}

	temp = n;
	 while (temp != 0)
	 {
		 i++;
		 temp = temp >> 1;
	 }
	 for (count = i - 1; count >= 0; count--)
	 {
		 k = n >> count;
		  if (k & 1)
			  printf("1");
		  else
			  printf("0");
	 }
}
