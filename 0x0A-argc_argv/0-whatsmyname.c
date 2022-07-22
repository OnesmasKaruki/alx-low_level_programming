#include <stdio.h>

/**
 * main - prints it's own name
 * @argc: count of argument in argv[]
 * @argv: array of strings
 *
 * Return: 0 on Success
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", argv[0]);
	return (0);
}
