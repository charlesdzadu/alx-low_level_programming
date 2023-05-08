#include "main.h"

/**
* error_read - checks read error 98
* @f0: the value to check
* @buffer: the buffer
* @argv: argument
**/
void error_read(int f0, char *buffer, char *argv)
{

	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv);
		free(buffer);
		exit(98);
	}
}

/**
* error_write - checks write  error 99
* @f0: value to check
* @buffer: the buffer
* @argv: argument
*/
void error_write(int f0, char *buffer, char *argv)
{
	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv);
		free(buffer);
		exit(99);
	}
}
/**
* error_close - checks close error 100
* @f0: the value to check
* @buffer: the buffer
*/
void error_close(int f0, char *buffer)
{
	if (f0 < 0)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %i\n", f0);
		free(buffer);
		exit(100);
	}
}

/**
* main - main
* @argc: number of arguments
* @argv: a pointer point to the array of arguments
* Return: Always 0
**/

int main(int argc, char **argv)
{
	int fd0, fd1, res0, res1;
	char *buffer;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
		return (0);

	fd1 = open(argv[1], O_RDONLY);
	error_read(fd1, buffer, argv[1]);
	fd0 = open(argv[2], O_WRONLY | O_TRUNC | O_CREAT, 0664);
	error_write(fd0, buffer, argv[2]);
	do {
		res0 = read(fd1, buffer, 1024);
		if (res0 == 0)
			break;
		error_read(res0, buffer, argv[1]);
		res1 = write(fd0, buffer, res0);
		error_write(res1, buffer, argv[2]);
	} while (res1 >= 1024);
	res0 = close(fd0);
	error_close(res0, buffer);
	res0 = close(fd1);
	error_close(res0, buffer);
	free(buffer);
	return (0);
}
