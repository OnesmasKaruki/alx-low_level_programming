#include <stdio.h>

/**
 * main - print number of argument passed to it
 * @argc: count argument of argv
 * @argv: arra of string arguments
 *
 * Return: 0 on Success.
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
