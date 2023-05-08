#include "main.h"
/**
 * make_buffer - takes a file name as input and returns a buffer
 * @file: The name of the input file
 * Return: A pointer to the newly-allocated buffer
 */
char *make_buffer(char *file)
{
	char *c;

	c = malloc(1024 * sizeof(char));

	if (c == NULL)
	{
		dprintf(STDERR_FILENO,
			"Error: Can't write to %s\n", file);
		exit(99);
	}

	return (c);
}

/**
 * close_file - takes a file descriptor as input and closes it
 * @fd - the file to be closed
 */
void close_file(int fd)
{
	int b;

	b = close(fd);

	if (b == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}
}

/**
 * main - Copies the contents of one file to another file
 * @argc: Arguments entered to the program
 * @argv: Array of pointers to the arguments
 *
 * Return: 97 if the number of arguments is incorrect, 98 if the file_from does not exist or cannot be read, 99 if file_to cannot be created or read from, and 100 if the file descriptor cannot be closed
 */
int main(int argc, char *argv[])
{
	int from, to, rd, wr;
	char *c;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	c = make_buffer(argv[2]);
	from = open(argv[1], O_RDONLY);
	rd = read(from, c, 1024);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);

	do {
		if (from == -1 || rd == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't read from file %s\n", argv[1]);
			free(c);
			exit(98);
		}

		wr = write(to, c, rd);
		if (to == -1 || wr == -1)
		{
			dprintf(STDERR_FILENO,
				"Error: Can't write to %s\n", argv[2]);
			free(c);
			exit(99);
		}

		rd = read(from, c, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);

	} while (rd > 0);

	free(c);
	close_file(from);
	close_file(to);

	return (0);
}

