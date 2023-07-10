#include "main.h"

/**
<<<<<<< HEAD
 * _strlen - This function is equal to strlen
 *
 * @s: this is my entry
 *
 * Return: the las character
 */
int _strlen(char *s)
{
	int a;

	for (a = 0; s[a] != '\0' ; a++)
	{
	}
	return (a);
=======
 * _strlen - returns the length of a string.
 * @s: input stringeturn.
 * Return: length of a string.
 */
int _strlen(char *s)
{
int count = 0;

while (*(s + count) != '\0')
count++;
return (count);
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

