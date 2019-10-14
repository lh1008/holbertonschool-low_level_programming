#include <stdio.h>
#include <stdlib.h>
/**
 * main - Entry point
 * Desc: main function
 * @argc: int type
 * @argv: char type
 * Return: Print the addition with conditions
 **/
int main(int argc, char *argv[])
{
	int i, add = 0;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			if (argv[i] == ('A' >= 'Z'))
			{
				printf("Error\n");
				return (1);
			}
			else if (argv[i] == ('a' >= 'z'))
			{
				printf("Error\n");
				return (1);
			}
		}
		for (i = 1; i < argc; i++)
		{
			add += atoi(argv[i]);
		}
		printf("%d\n", add);
	}
	else if (argc == 1)
	{
		printf("0\n");
	}
	return (0);
}
