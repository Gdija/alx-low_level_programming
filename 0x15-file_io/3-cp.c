#include "main.h"

/**
*error_f - checks if files can be opened
*@f_from: file to copy from
*@f_to: file to copy to
*@argv: arguments vector
*/
void error_f(int f_to, int f_from, char *argv[])
{
	if (f_from == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
	exit(98);
	}
	if (f_to == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
	exit(99);
	}
}
/**
* main - check code
*@argc: argument count
*@argv: argument vector
*Return: always 0
*/
int main(int argc, char *argv[])
{
	int f_from;
	int f_to;
	int error_close;
	ssize_t n;
	char buf[1024];

	if (argc != 3)
	{
	dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
	exit(97);
	}
	f_from = open(argv[1], O_RDONLY);
	f_to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	error_f(f_to, f_from, argv);
	while ((n = read(f_from, buf, 1024) > 0))
	{
	if (write(f_to, buf, n) != n)
	{
	dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]), exit(99);
	}
	}
	if (n == -1)
		dprintf(STDERR_FILENO, "Error:Can't read from file %s\n", argv[1]), exit(98);
	error_close = close(f_from);
	if (error_close == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
	exit(100);
	}
	error_close = close(f_to);
	if (error_close == -1)
	{
	dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", f_from);
	exit(100);
	}
	return (0);
}

