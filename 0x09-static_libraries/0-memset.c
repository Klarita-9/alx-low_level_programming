#include "main.h"
<<<<<<< HEAD

/**
 * _memset - This is my function copy the number the character to S
 * @s: This is my entry and return
 * @b: This is the character to copy
 * @n: This is the number of Bytes
 *
 * Return: This is my result and Return S
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n ; a++)
	{
		s[a] = b;
	}
	return (s);
=======
/**
 * _memset - fills memory with a constant byte,
 * @s: memory area.
 * @b: constant byte.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(s + i) =  b;

return (s);
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

