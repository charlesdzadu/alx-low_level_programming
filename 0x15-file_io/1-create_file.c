#include "main.h"

/**
 * create_file - Create a file
 * @filename: A file name
 * @text_content: Text content to add to file
 * Return: 1 if sucess and -1 if not
 */

int create_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (!filename)
		return (-1);

	op = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (op < 0)
		return (-1);

	if (text_content)
	{
		while (text_content[len])
			len++;
		wr = write(op, text_content, len);
		if (wr != len)
			return (-1);
	}

	close(op);

	return (1);
}
