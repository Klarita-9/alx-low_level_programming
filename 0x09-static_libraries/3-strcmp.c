#include "main.h"
/**
<<<<<<< HEAD
 * _strcmp - This is my function
 * @s1: This is my entry
 * @s2: This is my entry again
 * Return: This is my result
=======
 * _strcmp - compares two strings
 * @s1: first string.
 * @s2: second string.
 * Return: 0 if s1 and s2 are equals,
 * another number if not.
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
 */

int _strcmp(char *s1, char *s2)
{
<<<<<<< HEAD
	for (; (*s1 != '\0' && *s2 != '\0') && *s1 == *s2; s1++, s2++)
	{
	}
	if (*s1 == *s2)
	{
		return (0);
	}
	else
	{
		return (*s1 - *s2);
	}
=======
int i = 0, op = 0;

while (op == 0)
{
if ((*(s1 + i) == '\0') && (*(s2 + i) == '\0'))
break;
op = *(s1 + i) - *(s2 + i);
i++;
}

return (op);
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

