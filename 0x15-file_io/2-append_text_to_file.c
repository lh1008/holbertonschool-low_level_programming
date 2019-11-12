#include "holberton.h"
#include <stdlib.h>
#include <sys/types.h>
#include <sys/stat.h>
#include <fcntl.h>
#include <unistd.h>
/**
 * append_text_to_file - Entry point
 * Desc: append_text_to_file function
 * @filename: pointer to const char
 * @text_content: pointer to char type
 * Return: Function that appends text at the end of a file
 **/
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, counter = 0, given_wr;

	if (filename == NULL)
		return (-1);
	fd = open(filename, O_APPEND | O_WRONLY);
	if (fd == -1)
		return (-1);
	if (text_content == NULL)
		return (1);
	while (text_content[counter] != '\0')
		counter++;
	given_wr = write(fd, text_content, counter);
	if (given_wr == -1)
	{
		close(given_wr);
		return (-1);
	}
	close(fd);
	return (1);
}
