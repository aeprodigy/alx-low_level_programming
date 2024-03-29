#include "main.h"

/**
 * create_file - creates a file
 * @filenames: filename.
 * @text_content: content writed in the file.
 *
 * mike mambwe software engineer.
 * Return: 1 if it success. -1 if it fails.
 */
int create_file(const char *filenames, char *text_content)
{
	int fd;
	int nletterz;
	int rwr;

	if (!filenames)
		return (-1);

	fd = open(filenames, O_CREAT | O_WRONLY | O_TRUNC, 0600);

	if (fd == -1)
		return (-1);

	if (!text_content)
		text_content = "";

	for (nletterz = 0; text_content[nletterz]; nletterz++)
		;

	rwr = write(fd, text_content, nletterz);

	if (rwr == -1)
		return (-1);

	close(fd);

	return (1);
}
