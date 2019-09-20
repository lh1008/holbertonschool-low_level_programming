#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Desc: Zeros and commas
 * Return: Always 0 (Success)
 */
int main(void)
{
int mn;

for (mn = '0'; mn <= '9'; mn++)
{
putchar(mn);
if (mn == '9')
{
break;
}
putchar(',');
putchar(' ');
}
putchar('\n');
return (0);
}
