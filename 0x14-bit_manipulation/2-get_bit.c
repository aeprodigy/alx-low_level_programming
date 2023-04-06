#include "main.h"

/**
 *
 * get_bit - returns the value of a bit at a given
 * index.
 * @nlong: unsigned long int input.
 * @indexOfBit: index of the bit.
 *
 * Return: value of the bit.
 */
int get_bit(unsigned long int nlong, unsigned int indexOfBit)
{
	unsigned int unSigned_int;

	if (nlong == 0 && indexOfBit < 64)
		return (0);

	for (unSigned_int= 0; unSigned_int <= 63; nlong>>= 1, unSigned_int++)
	{
		if (indexOfBit == unSigned_int)
		{
			return (nlong & 1);
		}
	}

	return (-1);
}

