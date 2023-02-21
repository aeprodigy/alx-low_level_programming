#include "main.h"
/*this program prints the
 * Write a function that prints the last digit of a number.

Prototype: int print_last_digit(int);
Returns the value of the last digit

*/
/**
 * print_last_digit - print the last digit
 *
 * @n: parameter
 *
 * Return: return the last digit
 */
int print_last_digit(int n)
{
	int d;
	d = n % 10;
	if (d < 0)
	{
		_putchar(-d + '0');
		return (-d);
	}
	else
	{
		_putchar(d + '0');
		return (d);
	}
}
