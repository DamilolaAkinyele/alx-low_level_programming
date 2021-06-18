#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
* main - Determines either greater than 5, is less than 6, or is 0
*
* Return: Always 0 (success)
*/
int main(void)
{
char alp[26] = "abcdefghijklmnopqrstuvwxyz";
int i;
for (i = 0; i < 26; i++)
{
putchar(alp[i]);
}
putchar('\n');
return (0);
}
