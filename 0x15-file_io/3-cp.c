#include "holberton.h"
/**
 * main - Entry point
 * Desc: main function
 * @argc: int type
 * @argv: pointer to an integer array
 * Return: Program that copies the content of a file to another file.
 **/
int main(int argc, char *argv[])
{
	int file_from, file_to, _RD, _WR;
	char bust[1024];

	if (argc != 3)
	{dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	if (file_from == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	if (file_to == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	do {
		_RD = read(file_from, bust, 1024);
		_WR = write(file_to, bust, _RD);
	} while (_RD == 1024);
	if (_RD == -1)
	{dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (_WR == -1)
	{dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	if ((close(file_from)) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_from), exit(100);
	}
	if ((close(file_to)) == -1)
	{dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", file_to), exit(100);
	}
	return (0);
}
