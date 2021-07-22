#include <stdarg.h>
#include <stdio.h>


/**
* sum_them_all - returns the sum of all its parameters.
* @n: amount of the arguments.
*
* Return: sum of its parameters.
*/

int sum_them_all(const unsigned int n, ...)
{
va_list ap;
int i, sum;

va_start (ap, n);         /* Initialize the argument list. */

sum = 0;

if (n == 0)
return (0);

for (i = 0; i < n; i++)
sum += va_arg (ap, int);    /* Get the next argument value. */

va_end (ap);                  /* Clean up. */
return sum;
}

int
main (void)
{
/* This call prints 16. */
print_numbers ("; ", 3, 5, 5, 6);

/* This call prints 55. */
print_numbers ("; ", 10, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10);

return 0;
}
