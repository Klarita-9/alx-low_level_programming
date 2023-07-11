#include "main.h"
<<<<<<< HEAD

/**
 * _memcpy - This is my funcion copy Src to dest
 * @dest: This is my result
 * @src: This is my string
 * @n: This is n my number bytes to copy
 *
 * Return: This my my string copy
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;
	char *pDst = dest;
	char const *pSrc =  src;

	for (a = 0; a < n; a++)
	{
		*pDst++ = *pSrc++;
	}
	return (dest);
=======
/**
 * _memcpy - copies memory area,
 * @dest: destination memory area.
 * @src: source memory area.
 * @n: bytes filled.
 * Return: the pointer to dest.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
unsigned int i;

for (i = 0; i < n; i++)
*(dest + i) =  *(src + i);

return (dest);
>>>>>>> f5616404d00233773039bdeff86ccbd8892cf18d
}

