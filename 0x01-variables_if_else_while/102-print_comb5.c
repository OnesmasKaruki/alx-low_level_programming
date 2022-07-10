#include <stdio.h>
#include <stdlib.h>

/**
 * main - main block
 * Description: Write a program that prints all possible
 * combination of two digits
 * Return: 0
 */

int main(void)
{
	int c = 0, d = 0, e = 0, f = 0;

	while (f <= 9)
	{
		while (e <= 9)
		{
			while (d <= 9)
			{

				while (c <= 9)
				{
					if (!(f == c && e == d))
					{
						putchar('0' + f);
						putchar('0' + e);
						putchar(' ');
						putchar('0' + d);
						putchar('0' + c);

						if (!(f + e == 18 && c + d == 17 d == 9))
						{
							putchar(',');
							putchar(' ');
						}
					}
					c++;
				}
				d++
			}
			e++;
		}
		f++;
	}
	putchar('\n');
	return (0);
}
