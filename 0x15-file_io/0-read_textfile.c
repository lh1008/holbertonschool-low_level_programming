#include "holberton.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * read_textfile - Entry point
 * Desc: read_textfile function
 * @filename: pointer to const char
 * @letters: size_t type
 * Return: Function that reads a text file and prints
 **/
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, i = 0;
	char *bust;

	if (filename == NULL)
		return(0);
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return(0);

	bust = malloc(sizeof(char *) * letters);
	if (bust == NULL)
		return (0);

	i = read(fd, bust, letters);
	if (i == -1)
		return (0);
	i = write(STDOUT_FILENO, bust, i);
	if (i == -1)
		return (0);
	close(fd);
	free(bust);

	return(i);
}
