#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Prints numbers between 0 and 9 with commas and spaces.
*
* Return: Always 0 (success)
*/
int main(void)
{
int i;
for (i = 48; i < 58; i++)
{
putchar(i);
while (i < 57)
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
