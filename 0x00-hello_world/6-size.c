#include <stdio.h>
int main(void)
{

char hcar;
int integer;
long int longint;
long long int llint;
float flt;

printf("Size of a char: %d byte(s)\n", sizeof(hcar));
printf("Size of an int: %d byte(s)\n", sizeof(integer));
printf("Size of a long int: %d byte(s)\n", sizeof(longint));
printf("Size of a long long int: %d byte(s)\n", sizeof(llint));
printf("Size of a float: %d byte(s)\n", sizeof(flt));

return (0);

}
