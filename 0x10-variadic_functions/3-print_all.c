#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
* print_all - prints anything.
* @format: a list of types of arguments passed to the function.
*
* Return: no return.
*/
void print_all(const char * const format, ...)
{
va_list apy;
unsigned int i = 0, j, c = 0;
char *str;
const char l_arg[] = "cifs";

va_start(apy, format);
while (format && format[i])
{
j = 0;
while (l_arg[j])
{
if (format[i] == l_arg[j] && c)
{
printf(", ");
break;
} j++;
}
switch (format[i])
{
case 'c':
printf("%c", va_arg(apy, int)), c = 1;
break;
case 'i':
printf("%d", va_arg(apy, int)), c = 1;
break;
case 'f':
printf("%f", va_arg(apy, double)), c = 1;
break;
case 's':
str = va_arg(apy, char *), c = 1;
if (!str)
{
printf("(nil)");
break;
}
printf("%s", str);
break;
} i++;
}
printf("\n"), va_end(apy);
}
