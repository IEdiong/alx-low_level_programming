#include "main.h"

/**
 * create_buffer - Allocates 1024 bytes for a buffer
 * @file: file to be written into
 *
 * Return: A pointer to the buffer.
 */
char *create_buffer(char *file)
{
	char *buffer;

	buffer = malloc(sizeof(char) * 1024);
	if (buffer == NULL)
	{
		dprintf(STDERR_FILENO,
		"Error: Can't write to %s\n", file);
		exit(99);
	}
	return (buffer);
}

/**
 * close_file - Closes file descriptor
 * @fd: The file descriptor
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of a file to another file
 * @argc: The number of arguments passed to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on success.
 */
int main(int argc, char *argv[])
{
	int from, to, read_byte, write_byte;
	char *buffer;
	mode_t mode;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	buffer = create_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	read_byte = read(from, buffer, 1024);
	mode = S_IRUSR | S_IWUSR | S_IRGRP | S_IWGRP | S_IROTH;
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, mode);
	do {
		if (from == -1 || read_byte == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't read from file %s\n", argv[1]);
			free(buffer);
			exit(98);
		}
		write_byte = write(to, buffer, read_byte);
		if (to == -1 || write_byte == -1)
		{
			dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", argv[2]);
			free(buffer);
			exit(99);
		}
		read_byte = read(from, buffer, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	} while (read_byte > 0);
	free(buffer);
	close_file(from);
	close_file(to);
	return (0);
}
