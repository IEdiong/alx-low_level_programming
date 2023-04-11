#include "main.h"

/**
 * append_text_to_file - append text at the end of a file
 * @filename: file name
 * @text_content: the text content
 *
 * Return: 1 on success. Otherwise -1.
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd;
	ssize_t i, w_byte;

	if (!filename)
		return (-1);
	if (text_content)
	{
		i = 0;
		while (text_content[i])
			i++;

		fd = open(filename, O_WRONLY | O_APPEND);
		if (fd == -1)
			return (-1);
		w_byte = write(fd, text_content, i);
		if (w_byte == -1)
			return (-1);

		close(fd);
	}

	return (1);
}
