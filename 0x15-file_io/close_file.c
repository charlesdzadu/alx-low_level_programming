#include "main.h"

/**
 * close_file - Close open file description
 * @fd: File description
 */

void close_file(int fd)
{
	int c = close(fd);

	if (c < 1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}
