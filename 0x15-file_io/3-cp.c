#include "holberton.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
#include <stdio.h>

/**
 * main - Entry point
 * Desc: main function
 * @file_1: int type
 * @file_2: int type
 * Return: Function that closes a file descriptor
 **/
void _close_fd(int file_1, int file_2)
{
	if (file_1 != -1)
		

}
/**
 * main - Entry point
 * Desc: main function
 * @argc: int type
 * @letters: pointer to an integer array
 * Return: Program that copies the content of a file to another file.
 **/
int main(int argc, int *argv[])
{
	int file_from, file_to;
	char *bust;

	if (argc != 3)
	{
		dprintf(STDOUT_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(*ardc[1], O_RDONLY);
	if (file_from == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't read from file %s\n",
			*argv[1]);
		exit(98);
	}
	file_to = open(*argv[2], O_CREAT | O_TRUNC | O_RDWR, 0664);
	if (file_to == -1)
	{
		dprintf(STDOUT_FILENO, "Error: Can't write to %s\n", *argv[2]);
		exit(99);
	}
	bust = malloc(sizeof(char *) * 1024);
	if (bust == NULL)
		return (0);

}
