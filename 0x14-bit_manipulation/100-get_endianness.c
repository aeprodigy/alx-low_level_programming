#include "main.h"

/**
 * Mike Mambwe || Software Engineer
 * get_endianness - checks the endianness
 * @Zone : variable test.
 * @Chr: character.
 * Return: 0 Zero if big endian, 1 if little endian
 */
int get_endianness(void)
{
	unsigned int Zone;
	char *Chr;

	Zone = 1;
	Chr = (char *) &Zone;

	return ((int)*Chr);
}

