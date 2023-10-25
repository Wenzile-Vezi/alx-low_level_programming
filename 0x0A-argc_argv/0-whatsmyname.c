#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: number of argument
 * @argv: array of argument
 *
 * Description: prints the name of the program.
 *
 * Return: Always 0 (Success).
 */
int main(int argc __attribute__((unused)), char *argv[])
{
	printf("%s\n", *argv);
	return (0);
}
