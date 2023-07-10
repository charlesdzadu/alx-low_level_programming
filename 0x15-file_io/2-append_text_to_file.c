#include "main.h"

/**
 * append_text_to_file -  Append Text to file
 * @filename: File name to be appended
 * @text_content: A content to be appende to a file
 * Return: 1 on sucess and -1 on failure
 */


int append_text_to_file(const char *filename, char *text_content)
{
	ssize_t fd, wr;
	int text_length = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_RDWR | O_APPEND);
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
