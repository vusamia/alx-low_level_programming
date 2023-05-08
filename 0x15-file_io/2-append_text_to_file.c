#include "main.h"
/**
 * append_text_to_file - appends text to the end of a file
 * @filename: name of the file
 * @text_content: null-terminated string to add at the end of the file
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int i, j, lenstr = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (lenstr = 0; text_content[lenstr];)
			lenstr++;
	}

	i = open(filename, O_WRONLY | O_APPEND);
	j = write(i, text_content, lenstr);

	if (i == -1 || j == -1)
		return (-1);

	close(i);

	return (1);
}
