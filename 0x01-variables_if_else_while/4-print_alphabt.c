#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
char dsa;

for (dsa = 97; dsa <= 122; dsa++)
{
if (dsa != 'q' && dsa != 'e')
putchar(dsa);
}
putchar (10);
return (0);
}
