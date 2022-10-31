#include "main.h"

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: String of filename.
 * @text_content: String of content to appends in file.
 *
 * Return: 1 on success, -1 on failure.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	size_t nmemb = 0;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (!text_content)
	{
		close(fd);
		if (errno == EACCES || errno == ENOENT)
			return (-1);
		else
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

