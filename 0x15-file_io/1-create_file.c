#include "main.h"

/**
 * create_file - creates a file and fills it with text
 * @filename: name of the file to create
 * @text_content: text to write in the file
 *
 * Return: 1 on success, -1 on failure
 */
int create_file(const char *filename, char *text_content)
{
	/* Variable declaration and initialization */
	int fd, bytes_written = 0;

	if (filename == NULL)
		return (-1);

	/* Create or open the file in write-only mode */
	fd = open(filename, O_CREAT | O_WRONLY | O_TRUNC, 0600);
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
