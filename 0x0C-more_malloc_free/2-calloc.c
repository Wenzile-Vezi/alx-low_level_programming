#include <stdlib.h>

/**
 * _calloc - Entry point
 * @nmemb: array
 * @size: size of bytes
 *
 * Description: allocates memory for an array using malloc.
 * Return: NULL if size of nmemb is 0.
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int a;
	char *c;

	if (nmemb == 0 || size == 0)
		return (NULL);
	c = malloc(nmemb * size);
	if (c == NULL)
		return (NULL);
	for (a = 0; a < nmemb * size; a++)
		*(c + a) = 0;
	return ((void *)c);
}
