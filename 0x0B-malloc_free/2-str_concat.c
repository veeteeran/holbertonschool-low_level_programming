#include <stdlib.h>
int _strlen(char *s);
char *_strdup(char *str);

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

	/* get len of each string passed */
	len1 = _strlen(s1) + 1;
	len2 = _strlen(s2) + 1;
	/* adds lens together - 1 gets total len of concat string */
	len3 = (len1 + len2) - 1;

	/* possibly change ordering here */
	ptr = (char *) malloc(len3 * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}
	/* if NULL passed treat as empty string */
	else if (s1 == NULL)
	{
		s1 = "";
	}
	else if (s2 == NULL)
	{
		s2 = "";
		ptr = _strdup(s1);
	}
	else
	{
		ndx1 = 0;
		while (ndx1 < len1)
		{
			ptr[ndx1] = s1[ndx1];
			ndx1++;
		}

		ndx1--;
		ndx2 = 0;
		while (ndx2 < len2)
		{
			ptr[ndx1] = s2[ndx2];
			ndx1++;
			ndx2++;
		}
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

char *_strdup(char *str)
{
	char *ptr;
	int len, ndx;

	len = _strlen(str);

	ptr = malloc(len * sizeof(char));
	if (ptr == NULL)
	{
		return (NULL);
	}

	ndx = 0;
	while (str[ndx] != '\0')
	{
		ptr[ndx] = str[ndx];
		ndx++;
	}
	ptr[ndx] = '\0';
	return (ptr);
}
