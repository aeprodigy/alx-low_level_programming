#include "main.h"

/**
 * append_text_to_file - appends text at the end of a file
 * @namefile: filename.
 * @content_text: added content.
 * mike mambwe
 * Return: 1 if the file exists. -1 if the fails does not exist
 * or if it fails.
 */
int append_text_to_file(const char *namefile, char *content_text)
{
	int fd;
	int nletters;
	int rwr;

	if (!namefile)
		return (-1);

	fd = open(namefile, O_WRONLY | O_APPEND);

	if (fd == -1)
		return (-1);

	if (content_text)
	{
		for (nletters = 0; content_text[nletters]; nletters++)
			;

		rwr = write(fd, content_text, nletters);

		if (rwr == -1)
			return (-1);
	}

	close(fd);

	return (1);
}
