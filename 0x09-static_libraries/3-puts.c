#include "main.h"

/**
<<<<<<< HEAD
 * _puts - Escribir un texto
 *
 * @str: This is my entry
 *
=======
 * _puts - prints a string, followed by a new line,
 * @str: pointer to the string to print
 * Return: void
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
 */

void _puts(char *str)
{
<<<<<<< HEAD
	int a;

	for (a = 0; str[a] != '\0'; a++)
	{
		_putchar(str[a]);
	}
	_putchar('\n');
=======
int i = 0;

while (str[i])
{
_putchar(str[i]);
i++;
}
_putchar('\n');
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

