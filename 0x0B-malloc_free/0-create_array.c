#include <stdlib.h>
/**
 * create_array - creates an array of chars,
 * and initializes it with a specific char
 * @size: size of the array
 * @c: the char to initialze in array
 *
 * Return: pointer to the created array
 */
char *create_array(unsigned int size, char c)
{
	char *ptr;
	unsigned int ndx;

	ptr = malloc(size * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	for (ndx = 0; ndx < size; ndx++)
	{
		ptr[ndx] = c;
	}
	return (ptr);
}
