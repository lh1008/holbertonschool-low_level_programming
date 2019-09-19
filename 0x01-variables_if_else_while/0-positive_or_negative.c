#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 * Desc: random numbers
 * Return: Always 0 (Success)
 */
int main(void)

{
int n;

srand(time(0));
n = rand() - RAND_MAX / 2;
/* your code goes there */
if (n > 0)
{
/*if the number is greater than 0*/
printf("%d is positive\n", n);
}
else if (n == 0)
{
/*if the number is 0*/
printf("%d is zero\n", n);
}
else if (n < 0)
{
/*if the number is less than 0*/
printf("%d is negative\n", n);
}
return (0);
}
