#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: argument count
 * @argv: arguments
 * Return: 1 on success, -1 on failure
 */
int main(int argc, char *argv[])
{
	int file_from, file_to, readfile_from, writefile_to;
	char buffer[1024];

	/* check if the argument count is correct */
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to", argv[0]);
		exit(97);
	}

	/* open and read file_from and check success */
	file_from = open(argv[1], O_RDWR);
	readfile_from = read(file_from, buffer, 1024);
	if (file_from  == -1 || readfile_from == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	/* open and write file_to and check success */
	file_to = open(argv[2], O_CREAT | O_TRUNC | O_WRONLY, 0664);
	writefile_to = write(file_to, buffer, 1024);
	if (file_to == -1 || writefile_to == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}
	/* close files */
	file_from = close(file_from);
	file_to = close(file_to);
	if (file_from == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %s\n", argv[1]);
		exit(100);
	}
	if (file_to == -1)
	{
		dprintf(STDERR_FILENO, "Can't close fd %s\n", argv[2]);
		exit(100);
	}
	return (0);
}
