#include "main.h"

/**
 * read_textfile - Read a text file and print
 * @filename: A name of file that would be read
 * @letters: the size of total number that would be read
 * Return: 0 if something wrong and actual numbers it could read and print
 */

ssize_t read_textfile(char *filename, size_t letters)
{
	ssize_t fd, rd, wr;
	char *buffer;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd < 0)
		return (0);

	rd = read(fd, buffer, letters);
	if (rd < 0)
		return (0);

	wr = write(STDOUT_FILENO, buffer, rd);
	if (wr < 0 || wr != rd)
		return (0);

	free(buffer);
	close(fd);

	return (rd);
}
