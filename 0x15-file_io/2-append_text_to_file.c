#include "main.h"

/**
 * append_text_to_file - Appends text to the end of a file
 * @filename: name of file to append to
 * @text_content: text to append to file
 * Return: 1 on success, -1 on failure
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, bytes_written, len;

	if (filename == NULL)
		return (-1);

	/* Open the file for writing, append to end, and set permissions */
	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		/* Get the length of the string to write */
		len = 0;
		while (text_content[len])
			len++;

		/* Write the text to the file */
		bytes_written = write(fd, text_content, len);
		if (bytes_written == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
