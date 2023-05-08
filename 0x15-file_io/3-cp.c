#include "main.h"

/**
 * main - start of the program
 * @argc: argument count
 * @argv: arguments
 * Return: 0 on success
 */

int main(int argc, char *argv[])
{
	int fd_from, fd_to;

	if (check_args(argc) == -1)
		exit(97);

	fd_from = open_files(argv[1], argv[2]);
	if (fd_from == -1)
		exit(98);

	fd_to = open_files(argv[2], NULL);
	if (fd_to == -1)
	{
		close(fd_from);
		exit(99);
	}

	if (copy_file(fd_from, fd_to) == -1)
	{
		close(fd_from);
		close(fd_to);
		exit(99);
	}

	close_files(fd_from, fd_to);

	return (0);
}

int check_args(int argc)
{
	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		return (-1);
	}
	return (0);
}

int open_files(char *file_name, char *mode)
{
	int fd;

	if (mode == NULL)
		fd = open(file_name, O_RDONLY);
	else
		fd = open(file_name, O_CREAT | O_WRONLY | O_TRUNC, 00664);

	if (fd == -1)
		dprintf(STDERR_FILENO, "Error: Can't %s %s\n", mode == NULL ? "read from file" : "write to", file_name);

	return (fd);
}

int copy_file(int fd_from, int fd_to)
{
	ssize_t n_read;
	char buffer[BUFFER_SIZE];

	while ((n_read = read(fd_from, buffer, BUFFER_SIZE)) > 0)
	{
		if (write(fd_to, buffer, n_read) != n_read)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to file\n");
			return (-1);
		}
	}

	if (n_read == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file\n");
		return (-1);
	}

	return (0);
}

void close_files(int fd_from, int fd_to)
{
	if (close(fd_from) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_from);

	if (close(fd_to) == -1)
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd_to);
}
