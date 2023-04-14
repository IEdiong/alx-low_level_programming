#include "main.h"

/**
 * main - Copies content of a file to a new file
 * @argc: arguments count
 * @argv: arguments vector
 *
 * Return: status code.
 */
int main(int argc, char *argv[])
{
	int flags1, flags2, fd1, fd2, close_count1, close_count2;
	mode_t mode;
	char *buf[1024];
	ssize_t read_count, write_count;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: %s file_from file_to\n", argv[0]);
		exit(97);
	}

	/* flags */
	flags1 = O_RDONLY;
	flags2 = O_CREAT | O_WRONLY | O_TRUNC;

	/* permission mode for the newly created file */
	mode = 0664;

	/* file descriptors */
	fd1 = open(argv[1], flags1);
	fd2 = open(argv[2], flags2, mode);

	/* Try to read from FILE_FROM */
	read_count = read(fd1, buf, 1024);
	if (fd1 == -1 || read_count == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}

	/* Try to write to FILE_TO */
	write_count = write(fd2, buf, read_count);
	if (fd2 == -1 || write_count == -1 || write_count != read_count)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
		exit(99);
	}

	/* close all files */
	close_count1 = close(fd1);
	close_count2 = close(fd2);
	if (close_count1 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd1);
		exit(100);
	}
	if (close_count2 == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd2);
		exit(100);
	}

	return (1);
}
