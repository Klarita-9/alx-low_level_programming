#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * _strstr - locates a substring inside a string
 *
 * @haystack: string to search
 * @needle: substring to search for
 * Return: returns pointer to location of substring inside haystack or NULL
 */

char *_strstr(char *haystack, char *needle)
{
	int i;

	i = 0;
	while (haystack[i] != '\0')
	{
		int j, start;

		start = i;
		j = 0;
		while (haystack[i] == needle[j] &&
		       needle[j] != '\0' && haystack[i] != '\0')
		{
			i++;
			j++;
		}
		if (needle[j] == '\0')
			return (haystack + start);
		i = start + 1;
	}
	return (NULL);
=======

/**
 * _strstr - finds the first occurrence of the substring.
 * needle in the string haystack.
 * @haystack: entire string.
 * @needle: substring.
 * Return: pointer to the beginning of located substring or
 * NULL if the substring is not found.
*/
char *_strstr(char *haystack, char *needle)
{
char *bhaystack;
char *pneedle;

while (*haystack != '\0')
{
bhaystack = haystack;
pneedle = needle;

while (*haystack != '\0' && *pneedle != '\0' && *haystack == *pneedle)
{
haystack++;
pneedle++;
}
if (!*pneedle)
return (bhaystack);
haystack = bhaystack + 1;
}
return (0);
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

