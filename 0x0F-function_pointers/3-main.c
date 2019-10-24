#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>
/**
 * main - entry point
 * Desc: main function
 * @argc: argument count
 * @argv: argumemnts
 * Return: Main function return 0
 */
int main(int argc, char *argv[])
{
	int x, y, z;
	int (*p)(int, int);


	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	p = get_op_func(argv[2]);

	if (p == NULL)
	{
		printf("Error\n");
		exit(99);
	}

	x = atoi(argv[1]);
	y = atoi(argv[3]);
	z = p(x, y);

	printf("%d\n", z);
	return (0);

}
