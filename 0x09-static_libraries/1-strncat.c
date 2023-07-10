#include "main.h"
<<<<<<< HEAD

/**
 * _strncat - THis is the main
 * @dest: This is the dest
 * @src: This is the src
 * @n: Thi is n
 * Return: This is my return
 */
char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; b < n && src[b] != '\0'; b++)
	{
		dest[a] = src[b];
		a++;
	}
	if (b < n)
	{
	dest[a] = '\0';
	}
	return (dest);
=======
/**
 * _strncat - concatenates two strings,
 * @dest: destination.
 * @src: source.
 * @n: amount of bytes used from src.
 * Return: the pointer to dest.
 */
char *_strncat(char *dest, char *src, int n)
{
int count = 0, count2 = 0;

while (*(dest + count) != '\0')
{
count++;
}

while (count2 < n)
{
*(dest + count) = *(src + count2);
if (*(src + count2) == '\0')
break;
count++;
count2++;
}
return (dest);
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

