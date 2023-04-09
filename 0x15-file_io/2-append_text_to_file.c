#include "main.h"

/**
 * append_text_to_file - Append to the end of a file
 * @filename: A file name
 * @text_content: A pointer to a content of file
 * Return: 1 if success and -1 if not
 */

int append_text_to_file(const char *filename, char *text_content)
{
	int op, wr, len = 0;

	if (!filename)
		return (-1);

	op = open(filename, O_WRONLY | O_APPEND);
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
