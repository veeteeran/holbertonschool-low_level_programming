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
	char *point;

	if (needle[0] == '\0')
		return (&haystack[0]);

	h_ndx = 0;
	while (haystack[h_ndx] != '\0')
	{
		if (haystack[h_ndx] == needle[0])
		{
			point = &haystack[h_ndx];
			h_ndx += 1;
			n_ndx = 1;
			while (needle[n_ndx] != '\0')
			{
				if (haystack[h_ndx] == needle[n_ndx])
				{
					h_ndx++;
					n_ndx++;
					if (needle[n_ndx + 1] == '\0')
						return (point);
				}
				else
					break;
			}
		}
		h_ndx++;
	}
	return ('\0');
}
