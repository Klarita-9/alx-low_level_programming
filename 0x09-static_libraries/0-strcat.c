#include "main.h"

/**
<<<<<<< HEAD
 *_strcat - This is the main copy
 *@dest: This is my dest
 *@src: This is my source
 *
 * Return: This return to the result
=======
 * *_strcat - function commute srtings
 * @dest: param pointer to a char
 * @src: param pointer to a char
 * Return: return value of dest
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
 */

char *_strcat(char *dest, char *src)
{
<<<<<<< HEAD
	int a, b;

	for (a = 0; dest[a] != '\0'; a++)
	{
	}
	for (b = 0; src[b] != '\0'; b++)
	{
	dest[a] = src[b];
	a++;
	}
	return (dest);
=======
int i;
int j;

i = 0;
j = 0;

while (dest[i] != '\0')
{
i++;
}
while (src[j] != '\0')
{
dest[i] = src[j];
j++;
i++;
}

dest[i] = '\0';
return (dest);
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

