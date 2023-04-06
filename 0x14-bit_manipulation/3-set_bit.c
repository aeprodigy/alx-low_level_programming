#include "main.h"

/**
 *Mike Mambwe || Software Engineer.
 *set_bit - This function sets the value of a bit to 1.
 * at a given index.
 * @nlong: pointer of an unsigned long int.
 * @indexOfBit: index of the bit.
 * @m:the unsigned_int m
 * Return: 1 if it worked, -1 if it didn't.
 */
int set_bit(unsigned long int *nlong, unsigned int indexOfBit)
{
	unsigned int m;

	if (indexOfBit > 63)
		return (-1);

	m = 1 << indexOfBit;
	*nlong = (*nlong | m);

	return (1);
}

