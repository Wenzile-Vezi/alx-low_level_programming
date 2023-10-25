#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument count
 * @argv: pointer to array of argument
 *
 * Description: print each argument passed to program on a new line.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[])
{
	int a = 0;

	while (a < argc)
		printf("%s\n", argv[a++]);

	return (0);
}
