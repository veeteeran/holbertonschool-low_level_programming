#include <stdlib.h>
int _strlen(char *s);
/**
 * str_concat - concatenates two strings
 * @s1: string concatenated to
 * @s2: string to concatenate
 *
 * Return: pointer to concated strings
 */
char *str_concat(char *s1, char *s2)
{
	char *ptr;
	int len1, len2, len3, ndx1, ndx2;
	/* if NULL passed treat as empty string */
	if (s1 == NULL)
	{
		s1 = malloc(1);
		*s1 = '\0';
	}
	if (s2 == NULL)
	{
		s2 = malloc(1);
		*s2 = '\0';
	}
	/* get len of each string passed */
	len1 = _strlen(s1) + 1;
	len2 = _strlen(s2) + 1;
	/* adds lens together - 1 gets total len of concat string */
	len3 = (len1 + len2) - 1;
	ptr = (char *) malloc(len3 * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	ndx1 = 0;
	while (s1[ndx1])
	{
		ptr[ndx1] = s1[ndx1];
		ndx1++;
	}
	ndx2 = 0;
	while (ndx2 <= len2)
	{
		ptr[ndx1] = s2[ndx2];
		ndx1++;
		ndx2++;
	}
	return (ptr);
}

/**
 * _strlen - returns the length of a string
 * @s: the string to check
 *
 * Return: the length of a string as an int
 */
int _strlen(char *s)
{
	int counter;

	for (counter = 0; s[counter] != '\0'; counter++)
	{
		continue;
	}
	return (counter);
}
