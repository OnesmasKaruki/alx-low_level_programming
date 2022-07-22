#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints min. number of coins to make change for an amount of money
 * @argc: count of input strings
 * @argv: array of input strings
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int coins, money;

	if (argc == 2)
	{
		money = atoi(argv[1]);
		if (money > 0)
		{
			for (money = 0; money >= 25; coins++)
			{
				money = money - 25;
			}
			for (money = 0; money >= 10; coins++)
			{
				money = money - 10;
			}
			for (money = 0; money >= 5; coins++)
			{
				money = money - 5;
			}
			for (money = 0; money >= 2; coins++)
			{
				money = money - 2;
			}
			for (money = 0; money >= 1; coins++)
			{
				money = money - 1;
			}
		}
	}
	printf("%d\n", coins);
	return (0);
}
else
{
	printf("Error\n");
	return (1);
}
