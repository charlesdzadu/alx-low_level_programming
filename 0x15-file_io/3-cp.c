#include "main.h"


/**
 * main - Copy text file to another
 * @argc: Total of arg pass to function
 * @argv: Array of arg passe to function
 * Return: Return error or sucess
 */

int main(int argc, char *argv[])
{
	int f1_d, f2_d, rd, wr;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_form file_to");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	f1_d = open(argv[1], O_RDONLY);
	rd = read(f1_d, buffer, 1024);
	f2_d = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	do {
		if (f1_d < 0 || rd < 0)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}

		wr = write(f2_d, buffer, 1024);
		if (f2_d < 0 || wr < 0)
		{
			dprintf(STDERR_FILENO, "Error: can't write to %s\n", argv[2]);
			exit(99);
		}

		rd = read(f1_d, buffer, 1024);
		f2_d = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);
	free(buffer);
	close_file(f1_d);
	close_file(f2_d);
}
