#include "main.h"
#include <fcntl.h>
#include <unistd.h>

/**
 * append_text_to_file - Appends text at the end of a file
 * @filename: Name of the file
 * @text_content: The NULL terminated string to add at the end of the file
 *
 * Return: 1 on success, -1 on failure (e.g. file can't be opened)
 */
int append_text_to_file(const char *filename, char *text_content)
{
	int fd, write_status, len = 0;

	if (filename == NULL)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);
	if (fd == -1)
		return (-1);

	if (text_content != NULL)
	{
		while (text_content[len])
			len++;

		write_status = write(fd, text_content, len);
		if (write_status == -1)
		{
			close(fd);
			return (-1);
		}
	}

	close(fd);
	return (1);
}
