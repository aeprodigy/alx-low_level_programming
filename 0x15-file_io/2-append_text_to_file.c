#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @filename: filename.
 * @text_content: added content.
 * mike mambwe
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *filename, char *text_contents)
{
	int fd;
	int nletters;
	int rwr;

	if (!filename)
		return (-1);

	fd = open(filename, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (text_contents)
	{
		for (nletters = 0; text_contents[nletters]; nletters++)
			;

		rwr = write(fd, text_contents, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
