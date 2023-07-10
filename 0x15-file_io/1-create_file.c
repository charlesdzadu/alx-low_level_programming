#include "main.h"

/**
 * create_file -  Create new file
 * @filename: File name of new file
 * @text_content: A content of a new file
 * Return: 1 on sucess and -1 on failure
 */


int create_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;
	int text_length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
		for (text_length = 0; text_content[text_length];)
			text_length++;

	wr = write(fd, text_content, text_length);
	if (wr < 0)
		return (-1);

	close(fd);

	return (1);

}
