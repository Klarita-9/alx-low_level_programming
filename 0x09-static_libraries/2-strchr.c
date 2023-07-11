#include "main.h"
<<<<<<< HEAD
#include <stddef.h>
/**
 * _strchr - This is my funcion
 * @s: This my string of char
 * @c: This is my character
 * Return: This is my resulti
 */
char *_strchr(char *s, char c)
{
	for (; ; s++)
	{
		if (*s == c)
			return (s);
		if (*s == 0)
			return (NULL);
	}
	return (NULL);
=======
/**
 * _strchr - locates a character in a string,
 * @s: string.
 * @c: character.
 * Return: the pointer to the first occurrence of the character c.
 */
char *_strchr(char *s, char c)
{
unsigned int i = 0;

for (; *(s + i) != '\0'; i++)
if (*(s + i) == c)
return (s + i);
if (*(s + i) == c)
return (s + i);
return ('\0');
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

