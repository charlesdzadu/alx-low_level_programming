#include "main.h"

/**
 * read_textfile - Read text from file
 * @filename: A File name
 * @letters:  Total numbers of letter that should be printed
 * Return: Count of number that is printed
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t op, rd, wr;
	char *buf;

	if (filename == NULL)
		return (0);

	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
		return (0);

	op = open(filename, O_RDONLY);
	rd = read(o, buf, letters);
	wr = write(STDOUT_FILENO, buf, r);

	if (op == -1 || rd == -1 || wr == -1 || wr != rd)
	{
		free(buf);
		return (0);
	}

	free(buf);
	close(op);

	return (wr);
}
