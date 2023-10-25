#include <stdio.h>
#include "main.h"

/**
 * main - Entry point
 * @argc: argument counter
 * @argv: pointer to arrayof argument
 *
 * Description: prints the number of arguments passed to program.
 * Return: Always 0 (Success).
 */
int main(int argc, char *argv[] __attribute__((unused)))
{
	printf("%d\n", argc - 1);
	return (0);
}
