#include "main.h"

/**
<<<<<<< HEAD
 * _isdigit - If is 0 to 9 return 1, if not return 0
 *
 * @c: this is the entry
 *
 * Return: 0
 *
 **/
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	else
	{
		return (0);
	}
=======
 * _isdigit - checks for a digit (0 through 9)
 * @c: int to be checked
 * Return: 1 if c is a digit, 0 otherwise
 */
int _isdigit(int c)
{
return (c >= '0' && c <= '9');
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

