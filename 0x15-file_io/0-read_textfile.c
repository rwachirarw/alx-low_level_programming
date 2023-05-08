#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output.
 * @filename: file name
 * @letters: letters
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd = open(filename, O_RDONLY);
	char *buffer;
	ssize_t letread, letwritten;

	if (fd < 0 && filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	letread = read(fd, buffer, letters);

	if (letread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	letwritten = write(STDOUT_FILENO, buffer, letread);

	if (letwritten == -1 || letwritten != letread)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (letwritten);
}
