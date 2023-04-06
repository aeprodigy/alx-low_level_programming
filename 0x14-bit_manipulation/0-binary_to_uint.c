#include "main.h"

/**written by mambwe mike || software engineer 2023/4/6
 * binary_to_uint - converts a binary number to an
 * unsigned int, in this program.
 * @bin: binary.
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *bin)
{

	int length, base_two;
	unsigned int unsigned_integer;

	if (!bin)
		return (0);

	unsigned_integer = 0;

	for (length = 0; bin[length] != '\0'; length++)
		;

	for (length--, base_two = 1; length >= 0; length--, base_two *= 2)
	{
		if (bin[length] != '0' && bin[length] != '1')
		{
			return (0);
		}

		if (bin[length] & 1)
		{
			unsigned_integer += base_two;
		}
	}

	return (unsigned_integer);
}

