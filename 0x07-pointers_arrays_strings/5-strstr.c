#include "holberton.h"
/**
 * _strstr - locates a substring
 * @haystack: the string to search
 * @needle: the substring to search for in haystack
 *
 * Return: pointer to beginning of the located substring
 */
char *_strstr(char *haystack, char *needle)
{
	int h_ndx, n_ndx;
	int *point;

	h_ndx = 0;
	while (haystack[h_ndx] != '\0')
	{
		if (haystack[h_ndx] == needle[0])
		{
			p = &haystack[h_ndx];
			h_ndx += 1;
			n_ndx = 1;
			while (needle[n_ndx] != '\0')
			{
				if (haystack[h_ndx] == needle[n_ndx])
				{
					h_ndx++;
					n_ndx++;
					if (needle[n_ndx + 1] == '\0')
					{
						return (&needle[0]);
					}
				}
				else
				{
					break;
				}
			}
		}
		h_ndx++;
	}
	return ('\0');
}
