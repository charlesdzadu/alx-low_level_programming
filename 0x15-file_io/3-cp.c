#include "main.h"

/**
 * close_file - Close open file description
 * @fd: File description
 */

void close_file(int fd)
{
	int c = close(fd);

	if (c < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d", fd);
		exit(100);
	}
}

/**
 * main - Copy text file to another
 * @argc: Total of arg pass to function
 * @argv: Array of arg passe to function
 * Return: Return error or sucess
 */

int main(int argc, char *argv[])
{
	int f1_d, f2_d, rd;
	char buffer[1024];
	mode_t old_mask;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_form file_to\n");
		exit(97);
	}

	f1_d = open(argv[1], O_RDONLY);
	if (f1_d < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	old_mask = umask(0);
	f2_d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	umask(old_mask);
	while ((rd = read(f1_d, buffer, 1024)) > 0)
	{
		if (f2_d < 0 || write(f2_d, buffer, rd) != rd)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			close(f2_d);
			exit(99);
		}
	}

	if (rd < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	close_file(f1_d);
	close_file(f2_d);
}
