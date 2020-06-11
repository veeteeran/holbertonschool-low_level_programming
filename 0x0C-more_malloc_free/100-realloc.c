#include "holberton.h"
#include <stdlib.h>
/**
 * _realloc - reallocates memory bloack using malloc and free
 * @ptr: pointer to memory previously allocated
 * @old_size: size of allocated space for ptr
 * @new_size: size in bytes of new memory block
 *
 * Return: pointer to newly created array
 */
void *_realloc(void *ptr, unsigned int old_size, unsigned int new_size)
{
	char *new_ptr, *p;
	unsigned int end, i;

	if (ptr == NULL)
	{
		ptr = malloc(sizeof(char) * new_size);
		if (ptr == NULL)
			return (NULL);
		return (ptr);
	}

	if (new_size == old_size)
		return (ptr);

	if (new_size == 0)
	{
		free(ptr);
		return (NULL);
	}

	new_ptr = malloc(sizeof(char) * new_size);
	if (new_ptr == NULL)
		return (NULL);

	if (new_size > old_size)
		end = old_size;
	else
		end = new_size;

	p = ptr;
	for (i = 0; i < end; i++)
		new_ptr[i] =  p[i];
	free(ptr);
	p = new_ptr;
	return (p);
}
