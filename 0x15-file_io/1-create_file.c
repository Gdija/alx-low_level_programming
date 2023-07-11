#include "main.h"

/**
 * create_file - creates a file
 * @filename:name of the file
 * @text_content: text in the file
 * Return: 1 on succes -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int length, wr;

	if (filename == NULL)
		return (-1);

	if (text_content == NULL)
	{
	text_content = "";
	}
	for (length = 0; text_content[length]; length++)
		;
	fd = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	if (fd == -1)
		return (-1);
	wr = write(fd, text_content, length);
	if (wr == -1)
		return (-1);
	close(fd);
	return (1);
}
