#include "main.h"

void error_close(ssize_t fd)
{
	dprintf(STDERR_FILENO, "Error: Can't close fd %lu\n", fd);
	exit(100);
}

int main(int ac, char **av)
{
	ssize_t rd_fd, wr_fd, num_rd, num_wr;
	char *buffer;

	if (ac != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	rd_fd = open(av[1], O_RDONLY);
	if (rd_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		exit(98);
	}

	buffer = malloc(sizeof(char) * 1024);
	if (!buffer)
	{
		if (close(rd_fd) == -1)
			error_close(rd_fd);
		exit(98);
	}

	num_rd = read(rd_fd, buffer, 1024);
	if (num_rd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", av[1]);
		free(buffer);
		if (close(rd_fd) == -1)
			error_close(rd_fd);
		exit(98);
	}

	wr_fd = open(av[2], O_WRONLY | O_CREAT | O_TRUNC, 0664);
	if (wr_fd == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		free(buffer);
		if (close(rd_fd) == -1)
			error_close(rd_fd);
		exit(99);
	}

	num_wr = write(wr_fd, buffer, num_rd);
	if (num_wr == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", av[2]);
		free(buffer);
		if (close(rd_fd) == -1)
			error_close(rd_fd);
		if (close(wr_fd) == -1)
			error_close(wr_fd);
		exit(99);
	}
	free(buffer);
	if (close(rd_fd) == -1)
		error_close(rd_fd);
	if (close(wr_fd) == -1)
		error_close(wr_fd);

	return (0);
}




