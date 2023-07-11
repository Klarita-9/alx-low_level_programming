#include "main.h"
<<<<<<< HEAD

/**
 * _isalpha - check the the entry to deteminate if is lower or upper
 *
 * @c: This is the entry
 * Return: Always 0.
=======
/**
 * _isalpha - Check if character is a alphabet character.
 * @c: type int character
 * Return: 1 if letter, lowercase or uppercase, and 0 otherwise
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
 */

int _isalpha(int c)
{
<<<<<<< HEAD
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
		return (1);
	}
	else
	{
	return (0);
	}
=======
if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
return (1);

else
return (0);
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

