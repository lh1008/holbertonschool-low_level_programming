#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
int dsa;

for (dsa = '0'; dsa <= '9'; dsa++)
putchar(dsa);
for (dsa = 'a'; dsa <= 'f'; dsa++)
putchar(dsa);
putchar('\n');
return (0);
}
