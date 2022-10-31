#include "main.h"

/**
 * main - Entry point of program.
 * @ac: Argument count.
 * @av: Array of strings.
 *
 * Description: Reads the content of one file and writes them to another.
 * Return: 0 on success.
 */
int main(int ac, char **av)
{
	ssize_t rd_fd, wr_fd, num_rd, num_wr;
	char *buffer;

	if (ac != 3)
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n"), exit(97);

	rd_fd = open(av[1], O_RDONLY);
	if (rd_fd == -1)
		error_read_open("Error: Can't read from file", av[1]);

	buffer = malloc(sizeof(char) * BUFF_SIZE);
	if (!buffer)
	{
		if (close(rd_fd) == -1)
			error_close(rd_fd);
		exit(98);
	}

	wr_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (wr_fd == -1)
		error_write_open("Error: Can't write to", av[2], buffer, rd_fd);

	do {
		num_rd = read(rd_fd, buffer, BUFF_SIZE);
		if (num_rd == -1)
			error_read_write("Error: Can't read from file", av[1],
					buffer, rd_fd, wr_fd, 'r');

		num_wr = write(wr_fd, buffer, num_rd);
		if (num_wr == -1 || num_wr != num_rd)
			error_read_write("Error: Can't write to", av[2],
					buffer, rd_fd, wr_fd, 'w');
	} while (num_rd == BUFF_SIZE);

	free(buffer);
	if (close(rd_fd) == -1)
		error_close(rd_fd);
	if (close(wr_fd) == -1)
		error_close(wr_fd);
	return (0);
}

/**
 * error_close - Writes to standard error and exits whenever close() fails.
 * @fd: File descriptor for which close() failed.
 */
void error_close(ssize_t fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %lu\n", fd);
	exit(100);
}

/**
 * error_read_open - Exits the program if file was not opened for reading.
 * @msg: Error message to print.
 * @filename: Name of file which could not be opened.
 */
void error_read_open(char *msg, char *filename)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	exit(98);
}

/**
 * error_write_open - Safely exits program in case of write opening error.
 * @msg: Error message to print.
 * @filename: File which could not be opened for writing.
 * @buff: Buffer to store read characters on heap.
 * @rd_fd: File descriptor for file opened for reading.
 */
void error_write_open(char *msg, char *filename, char *buff, ssize_t rd_fd)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	free(buff);
	if (close(rd_fd) == -1)
		error_close(rd_fd);
	exit(99);
}

/**
 * error_read_write - Safely exits program on error during read or write.
 * @msg: Error message.
 * @filename: File on which error occured while reading or writing.
 * @buff: Pointer to temporary buffer on heap.
 * @rd_fd: File descriptor for file being read from.
 * @wr_fd: File descriptor for file being written to.
 * @mode: Process mode in which error occured.
 */
void error_read_write(char *msg, char *filename, char *buff, ssize_t rd_fd,
		ssize_t wr_fd, char mode)
{
	dprintf(STDERR_FILENO, "%s %s\n", msg, filename);
	free(buff);
	if (close(rd_fd) == -1)
		error_close(rd_fd);
	if (close(wr_fd) == -1)
		error_close(wr_fd);
	if (mode == 'r')
		exit(98);
	else
		exit(99);
}

