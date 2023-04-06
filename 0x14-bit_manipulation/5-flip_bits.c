#include "main.h"

/**
 * Mike Mambwe || Software Engineer.
 * flip_bits - returns the number of bits you would
 * need to flip to get from one number to another
 * @numOne: number one of the program.
 * @numTwo: number two of the program.
 *
 * Return: number of bits.
 */
unsigned int flip_bits(unsigned long int numOne, unsigned long int numTwo)
{
	unsigned int numbits;

	for (numbits = 0; numOne || numTwo; numOne >>= 1, numTwo >>= 1)
	{
		if ((numOne & 1) != (numTwo & 1))
			numbits++;
	}

	return (numbits);
}

