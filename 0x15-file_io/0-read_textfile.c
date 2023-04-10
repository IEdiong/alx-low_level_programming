#include "main.h"

/**
 * read_textfile - reads text file and prints to stdout POSIX
 * @filename: text file buffer
 * @letters: number of letters it should read and print
 *
 * Return: actual number of letters it could read and print.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd;
	char *buff;
	ssize_t w_byte, r_byte;

	if (!filename)
		return (0);

	/* open the file in read/write mode */
	fd = open(filename, O_RDONLY);
	if (fd != -1)
	{
		buff = malloc(sizeof(char) * letters);
		if (!buff)
			return (0);
		/* read the content of the file */
		r_byte = read(fd, buff, letters);
		if (r_byte == -1)
		{
			free(buff);
			return (0);
		}

		/* write it out to stdout */
		w_byte = write(STDOUT_FILENO, buff, r_byte);
		if (w_byte == -1)
		{
			free(buff);
			return (0);
		}

		/* close the file */
		close(fd);
		free(buff);
		return (w_byte);
	}
	return (0);
}
