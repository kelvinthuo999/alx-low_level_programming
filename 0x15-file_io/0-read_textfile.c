#include "main.h"

/**
 * read_textfile - Reads a text file and prints it to the standard output
 * @filename: Name of the file to be read
 * @letters: Number of letters to read and print
 *
 * Return: The number of letters printed, or 0 if it failed
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int file_descriptor;
	ssize_t bytes_read, bytes_written;
	char *buf;

	/* Check if filename is NULL */
	if (filename == NULL)
		return (0);

	/* Open the file in read-only mode */
	file_descriptor = open(filename, O_RDONLY);
	if (file_descriptor < 0)
		return (0);

	/* Allocate memory for the buffer */
	buf = malloc(sizeof(char) * letters);
	if (buf == NULL)
	{
		close(file_descriptor);
		return (0);
	}
	bytes_read = read(file_descriptor, buf, letters);
	/* Check for read() failure */
	if (bytes_read < 0)
	{
		free(buf);
		close(file_descriptor);
		return (0);
	}
	/* Write to standard output */
	bytes_written = write(STDOUT_FILENO, buf, bytes_read);
	free(buf);
	close(file_descriptor);
	/* Check for write() failure or incomplete write */
	if (bytes_written < 0 || bytes_written != bytes_read)
		return (0);

	return (bytes_written);
}
