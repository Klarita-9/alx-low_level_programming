<<<<<<< HEAD
#include <unistd.h>
=======
#include "main.h"
>>>>>>> 62bc9aa5058535730ed39734b465e243d22e5a73

/**
 * _putchar - writes the character c to stdout
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _putchar(char c)
{
return (write(1, &c, 1));
}

