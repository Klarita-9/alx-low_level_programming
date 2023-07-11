#include "main.h"
<<<<<<< HEAD
#include <stddef.h>

/**
 * _strpbrk - This is my function
 * @s: This is my entry
 * @accept: This is my second entry
 * Return: This is my return
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int a, b;

	for (a = 0; s[a] != '\0'; a++)
	{
		for (b = 0; accept[b] != '\0'; b++)
		{
			if (accept[b] == s[a])
			{
				return (&s[a]);
			}
		}
	}
	return (NULL);
=======

/**
 * _strpbrk - searches a string for any of a set of bytes.
 * @s: first string.
 * @accept: second string.
 * Return: a pointer to the byte in s that matches one of the
 * bytes in accept, or NULL if no such byte is found.
 */
char *_strpbrk(char *s, char *accept)
{
unsigned int i, j;

for (i = 0; *(s + i) != '\0'; i++)
{
for (j = 0; *(accept + j) != '\0'; j++)
{
if (*(s + i) == *(accept + j))
return (s + i);
}
}
return ('\0');
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

