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
			return (0);
		write_byte = write(STDOUT_FILENO, buffer, read_byte);
		if (write_byte == -1 || write_byte != read_byte)
			return (0);
		free(buffer);
		close(fd);
		return (write_byte);
	}
	return (0);
}
```

Actual solution in [0-read_textfile.c](./0-read_textfile.c)
