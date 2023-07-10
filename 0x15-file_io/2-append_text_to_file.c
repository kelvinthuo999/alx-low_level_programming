#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: file to append the text to
 * @text_content: content to append into the file
 *
 * Return: 1 on success and -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written = 0;

	if (filename == NULL) /* Check if filename is NULL */
		return (-1);

	/* Open the file in write-only mode with append flag */
	fd = open(filename, O_WRONLY | O_APPEND);
	/* Check for open() failure */
	if (fd < 0)
		return (-1);

	if (text_content != NULL)
	{
		/* Iterate until null terminator is reached */
		while (text_content[bytes_written] != '\0')
			bytes_written++;

		/* Write to the file and check for write() failure */
		if (write(fd, text_content, bytes_written) != bytes_written)
		{
			close(fd); /* Clean up and close the file */
			return (-1);
		}
	}

	close(fd); /* Close the file */
	return (1); /* Return success */
}
