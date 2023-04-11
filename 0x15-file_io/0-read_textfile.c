#include "main.h"

/**
 * read_textfile - reads a text file and prints the letterz
 * @filename: name of the file.
 * @letterz: numbers of letterz to be printed.
 * mike mambwe software engineer.
 * Return: numbers of letterz printed. It fails, returns 0 of the system.
 */
ssize_t read_textfile(const char *filename, size_t letterz)
{
	int fd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	fd = open(filename, O_RDONLY);

	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letterz));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letterz);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
