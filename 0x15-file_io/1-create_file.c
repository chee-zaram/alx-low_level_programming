#include "main.h"

/**
 * create_file - A function that creates a file.
 * @filename: String of filename.
 * @text_content: String to content file should contain.
 *
 * Return: 1 on success, -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	size_t nmemb = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);

	if (!text_content)
	{
		close(fd);
		return (1);
	}

	while (text_content[nmemb])
		nmemb++;

	if (write(fd, text_content, nmemb) == -1)
	{
		close(fd);
		return (-1);
	}
	close(fd);

	return (1);
}

