# 0x15. C - File I/O

## 0. Tread lightly, she is near

A function that reads a text file and prints it to the `POSIX` standard output.

```
#include <stdlib.h>
#include <unistd.h>

/**
 * read_textfile - reads a text file and prints it to the POSIX standard output
 * @filename: name of the file
 * @letters: number of letters to read and print
 *
 * Return: number of letters it read and printed.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	ssize_t read_byte, write_byte;
	char *buffer;

	if (!filename)
		return (0);

	fd = open(filename);
	if (fd != -1)
	{
		buffer = malloc(letters);
		if (!buffer)
			return (0);

		read_byte = read(fd, buffer, letters);
		if (read_byte == -1)
		{
			free(buffer);
			return (0);
		}

		write_byte = write(STDOUT_FILENO, buffer, read_byte);
		if (write_byte == -1 || write_byte != read_byte)
		{
			free(buffer);
			return (0);
		}

		free(buffer);
		close(fd);
		return (write_byte);
	}
	return (0);
}
```

Actual solution in [0-read_textfile.c](./0-read_textfile.c)

## 1. Under the snow

A function that reads a text file and prints it to the `POSIX` standard output.

```
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
```

Actual solution in [1-create_file.c](./1-create_file.c)
