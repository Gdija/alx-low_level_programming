#include "main.h"

/**
 * read_textfile - reads a text file and prints it
 * @filename: text file
 * @letters: number of letters
 * Return: the actual number of letters
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *mem;
	ssize_t rd, wr;
	int fd;

	if (filename == NULL)
	{
	return (0);
	}
	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);
	mem = malloc(sizeof(char) * (letters));
	if (mem == NULL)
		return (0);
	rd = read(fd, mem, letters);
	wr = write(STDOUT_FILENO, mem, rd);
	close(fd);
	free(mem);
	return (wr);
}
