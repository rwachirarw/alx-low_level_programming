#include "main.h"

/**
 * read_textfile - reads a text file and prints it to the POSIX std output.
 * @filename: file name
 * @letters: letters
 * Return: number of letters
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t lread, lwritten;
	char *buffer;

	if (filename == NULL)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (buffer == NULL)
	{
		close(fd);
		return (0);
	}

	lread = read(fd, buffer, letters);
	if (lread == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	lwritten = write(STDOUT_FILENO, buffer, lread);
	if (lwritten == -1 || lwritten != lread)
	{
		free(buffer);
		close(fd);
		return (0);
	}

	free(buffer);
	close(fd);

	return (lwritten);
}
