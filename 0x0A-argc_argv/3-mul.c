#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Desc: main function
 * @argc: int type
 * @argv: char type
 * Return: Print the multiplication
 **/
int main(int argc, char *argv[])
{
	int i, mult = 1;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			mult = mult * atoi(argv[i]);
		}
		printf("%d\n", mult);
	}
	else
	{
		printf("Error\n");
	}
	return (0);
}
