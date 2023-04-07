#include "main.h"

/**Mike mambwe || software engineer.
 * print_binary - prints the binary representation
 * of a number.
 * @nlong: unsigned long int variable.
 *
 * Return: no return functions.
 */
void print_binary(unsigned long int nlong)
{
	if (nlong >> 0)
	{
		if (nlong >> 1)
			print_binary(nlong >> 1);
		_putchar((nlong & 1) + '0');

	}
	else
	{
		_putchar('0');
	}
}

