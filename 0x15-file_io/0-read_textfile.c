#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to POSIX standard output.
 * @filename: String of file name.
 * @letters: Number of letters to read from the file.
 *
 * Return: The number of characters read and written, or 0 if any error.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	ssize_t num_rd = 0, num_wr = 0;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	if (!buffer)
	{
		close(fd);
		return (0);
	}

	num_rd = read(fd, buffer, letters);
	if (num_rd == -1)
	{
		free(buffer);
		close(fd);
		return (0);
	}
	close(fd);

	num_wr = write(STDOUT_FILENO, buffer, num_rd);
	if (num_wr == -1 || num_wr != num_rd)
	{
		free(buffer);
		return (0);
	}
	free(buffer);

	return (num_wr);
}

