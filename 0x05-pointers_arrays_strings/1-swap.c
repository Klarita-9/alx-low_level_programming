#include "main.h"
<<<<<<< HEAD
#include <stdio.h>

/**
 * main - check the code
 *
 * Return: Always 0.
 */
int main(void)
{
int a;
int b;

a = 98;
b = 42;
printf("a=%d, b=%d\n", a, b);
swap_int(&a, &b);
printf("a=%d, b=%d\n", a, b);
return (0);
=======

/**
 * swap_int - swaps the values of two integers
 * @a: pointer to first value
 * @b: pointer to second value
 */
void swap_int(int *a, int *b)
{
int c;

c = *a;
*a = *b;
*b = c;
>>>>>>> 62bc9aa5058535730ed39734b465e243d22e5a73
}

