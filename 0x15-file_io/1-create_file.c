#include "main.h"

/**
 * create_file - creates a file
 * @filename: name of file to be create
 * @text_content: a NULL terminated string to write into the file
 *
 * Return: 1 on success. Otherwise -1 on failure.
 */
int create_file(const char *filename, char *text_content)
{
	int fd, i;
	ssize_t w_byte;

	if (!filename)
		return (-1);

	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, S_IRUSR | S_IWUSR);
	if (fd == -1)
		return (-1);

	if (!text_content)
		return (1);

	i = 0;
	while (text_content[i])
	{
		i++;
	}
	w_byte = write(fd, text_content, sizeof(char) * i);
	if (w_byte == -1)
		return (-1);

	return (1);
}
