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
	ssize_t byte;

	if (!filename)
		return (0);

	/* open the file in read/write mode */
	fd = open(filename, O_RDWR);
	if (fd != -1)
	{
		buff = malloc(letters);
		if (!buff)
			return (0);
		/* read the content of the file */
		read(fd, buff, letters);

		/* write it out to stdout */
		byte = write(1, buff, letters);
		if (byte == -1)
			return (0);

		/* close the file */
		close(fd);
		return (byte);
	}
	return (0);
}
