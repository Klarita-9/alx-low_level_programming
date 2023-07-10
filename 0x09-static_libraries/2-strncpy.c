#include "main.h"
/**
<<<<<<< HEAD
 * _strncpy - This is my main
 * @dest: This is my dest
 * @src: This is my source
 * @n: This is my N
 *
 *Return: THis is my return
=======
 * _strncpy - copies a string
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes from src.
 * Return: the pointer to dest.
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
 */

char *_strncpy(char *dest, char *src, int n)
{
<<<<<<< HEAD
	int b;

	for (b = 0; b < n && src[b] != '\0' ; b++)
	{
	dest[b] = src[b];
	}
	for (; b  < n; b++)
	{
		dest[b] = '\0';
	}
	return (dest);
=======
int i;

for (i = 0; i < n && src[i] != '\0'; i++)
dest[i] = src[i];
for ( ; i < n; i++)
dest[i] = '\0';

return (dest);
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

