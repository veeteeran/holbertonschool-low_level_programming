#include <stdlib.h>
/**
 * array_iterator - executes a function given for each element of arr
 * @array: array passed to function
 * @size: size of the array
 * @action: pointer to function used on array
 *
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int i;

	for (i = 0; i < size; i++)
	{
		action(array[i]);
	}
}
