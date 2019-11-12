#include "holberton.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * create_file - Entry point
 * Desc: create_file function
 * @filename: pointer to const char
 * @text_content: pointer to char type
 * Return: Function that creates a file
 **/
int create_file(const char *filename, char *text_content)
{
	int fd, counter = 0, given_wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_CREAT | O_TRUNC | O_RDWR, 0600);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[counter] != '\0')
		counter++;
	given_wr = write(fd, text_content, counter);
	if (given_wr == -1)
		return (-1);
	close(fd);
	return (1);
}
