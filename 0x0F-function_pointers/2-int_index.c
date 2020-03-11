/**
 * int_index - searches for an int
 * @array: search for int in this array
 * @size: size of array
 * @cmp: pointer to function to compare values
 *
 * Return: first index of matched int, -1 if no match or size is < 0
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || size <= 0 || cmp == NULL)
		return;
	if (size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}
	return (-1);
}
