#include "main.h"

/**
 * main - copies the content of a file to another file
 * @argc: number of arguments passed to the program
 * @argv: array of arguments
 *
 * Return: Always 0 (Success)
 */
int main(int argc, char *argv[])
{
	int fd_r, fd_w;
	ssize_t bytes_read, bytes_written;
	char buf[BUFSIZ];

	if (argc != 3)
	{
		fprintf(stderr, "Usage: cp file_from file_to\n");
		exit(97);
	}
	fd_r = open(argv[1], O_RDONLY);
	if (fd_r < 0)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	fd_w = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	if (fd_w < 0)
	{
		fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
		close(fd_r);
		exit(99);
	}
	while ((bytes_read = read(fd_r, buf, sizeof(buf))) > 0)
	{
		bytes_written = write(fd_w, buf, bytes_read);
		if (bytes_written != bytes_read)
		{
			fprintf(stderr, "Error: Can't write to %s\n", argv[2]);
			close(fd_r);
			close(fd_w);
			exit(99);
		}
	}
	if (bytes_read < 0)
	{
		fprintf(stderr, "Error: Can't read from file %s\n", argv[1]);
		exit(98);
	}
	if (close(fd_r) < 0 || close(fd_w) < 0)
	{
		fprintf(stderr, "Error: Can't close file descriptors\n");
		exit(100);
	}
	return (0);
}
