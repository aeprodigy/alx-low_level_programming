#include "main.h"

/**
 * Mike Mambwe || Software Engineer
 * clear_bit - sets the value of a bit to 0.
 * at a given index.
 * @nlong: pointer of an unsigned long int.
 * @indexOfBit: index of the bit.
 * @unsignedM: unsigned int.
 * Return: 1 if it worked, -1 if it didn't.
 */
int clear_bit(unsigned long int *nlong, unsigned int indexOfBit)
{
	unsigned int unsignedM;

	if (indexOfBit > 63)
		return (-1);

	unsignedM = 1 << indexOfBit;

	if (*nlong & unsignedM)
		*nlong ^= unsignedM;

	return (1);
}

