#include "holberton.h"
/**
* print_sign - determines if the input is greater or less than or equal to zero
*
* @n: input number
*
* Return: 1 for letters and 0 for others
* -1 is less than zero
*/
int print_sign(int n)
{
if (n > 0)
{
_putchar(43);
return (1);
}
else if (n < 0)
{
_putchar(45);
return (-1);
}
else
{
_putchar(48);
return (0);
}
_putchar('\n');
}
