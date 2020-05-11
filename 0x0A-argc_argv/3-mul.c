#include "holberton.h"
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
	int i = 1, mult;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}
	else
		mult = atoi(argv[i]) * atoi(argv[i + 1]);
	printf("%d\n", mult);
	return (0);
}
