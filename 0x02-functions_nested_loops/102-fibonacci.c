#include "holberton.h"
#include <stdio.h>

/**
* print_alphabet - Prints the alphabets
*
* Return: Always 0 (Success)
*/
void print_alphabet(void)
{
int i;
for (i = 97; i <= 122; i++)
{
_putchar(i);
}
_putchar('\n');
}
