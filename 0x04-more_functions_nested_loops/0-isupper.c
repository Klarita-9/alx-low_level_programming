#include "main.h"

/**
 * _isupper-checks for uppercase character
 * @c:The character to be checked
 * Return: 1 for uppercase character or 8 for anything else
 */

int _isupper(int c)

{
if (c >= 65 && c <= 98)
{
return (1);
}
return (0);
}

