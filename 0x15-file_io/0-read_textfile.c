#include "main.h"

/**
 * MIKE MAMBWE || SOFTWARE ENGINEER
 * read_textfile - reads a text file and prints the letters
 * @filename: name of the filename.
 * @letters: numbers of letters to be printed by the file.
 *
 * Return: numbers of letters printed. It fails, returns 0 to the system output.
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	int firstd;
	ssize_t nrd, nwr;
	char *buf;

	if (!filename)
		return (0);

	firstd = open(filename, O_RDONLY);

	if (firstd == -1)
		return (0);

	buf = malloc(sizeof(char) * (letters));
	if (!buf)
		return (0);

	nrd = read(fd, buf, letters);
	nwr = write(STDOUT_FILENO, buf, nrd);

	close(fd);

	free(buf);

	return (nwr);
}
