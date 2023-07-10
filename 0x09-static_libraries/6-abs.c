#include "main.h"
<<<<<<< HEAD

/**
 * _abs - This is a absolute value
 *
 * @a: This is the entry
 *
 * Return: Always 0.
 */

int _abs(int a)
{
	if (a > 0)
	{
		return (a);
	}
	else if (a < 0)
	{
		a = a * -1;
		return (a);
	}
	else
	{
		return (a);
	}
=======
/**
 * _abs - compute the absolute value of an integer
 * @n: int type number
 * Return: absolute value of @n
 */
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
else
{
return (n);
}
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

