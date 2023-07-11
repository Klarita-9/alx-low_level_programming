#include "main.h"

/**
<<<<<<< HEAD
 * _islower - Check if the entry is in lower.
 * @c: This is the entry
 *
 * Return: Always 0.
=======
 * _islower - prints 1 or 0 depending on input
 * @c: first parameter
 *
 * Description: prints all lowercase letters
 * Return: Always(0).
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
 */

int _islower(int c)
{
<<<<<<< HEAD
	if (c >= 'a' && c <= 'z')
	{
		return (1);
	}
	else
	{
		return (0);
	}
=======
return (c >= 'a' && c <= 'z');
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

