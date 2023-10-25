#include "main.h"
#include <stdlib.h>

/**
 * _realloc - Entry point
 * @ptr: void pointer
 * @old_size: const allocated size
 * @new_size: new size to be allocated.
 *
 * Description: reallocates a memory block using malloc and free.
 * Return: pointer to new allocated memory or null.
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	unsigned char *p;
	unsigned int a;

	if (new_size == old_size)
		return (ptr);
	if (new_size == 0 && ptr != NULL)
	{
		free(ptr);
		return (NULL);
	}
	if (ptr == NULL)
	{
		ptr = malloc(new_size * sizeof(void *));
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}
	p = malloc(new_size * sizeof(char));
	if (p == NULL)
		return (NULL);
	a = 0;
	if (new_size > old_size)
	{
		while (a < old_size)
		{
			p[a] = ((char *)ptr)[a];
			a++;
		}
		free(ptr);
		return (p);
	}

	while (a < new_size)
	{
		p[a] = ((char *)ptr)[a];
		a++;
	}
	free(ptr);
	return (p);
}
