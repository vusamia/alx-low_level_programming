#include "main.h"
#include <stdlib.h>
/**
 * read_textfile - reads a text file and prints it to the stdout
 * @filename: name of the file
 * @letters: number of letters that should be read and printed
 * Return: the number of letters printed on success, and 0 on failure
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int fd, rd_total, total;
	char *content;

	if (filename == NULL)
		return (0);
	fd = open(filename, O_RDONLY, 0700);
	if (fd == -1)
		return (0);
	content = malloc(sizeof(char) * letters);
	if (content == NULL)
		return (0);
	rd_total = read(fd, content, letters);
	if (rd_total == -1)
	{
		free(content);
		return (0);
	}
	total = write(STDOUT_FILENO, content, letters);
	if (total == -1 || rd_total != total)
	{
		free(content);
		return (0);
	}
	close(fd);
	return (total);
}
