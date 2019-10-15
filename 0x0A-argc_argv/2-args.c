#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Desc: main function
 * @argc: int type
 * @argv: char type
 * Return: Print arguments it receives
 **/
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[i]);
	}
	return (0);
}
