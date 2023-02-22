#include <stdlib.h>
#include <time.h>
/* more headers goes there */
#include <stdio.h>
#include "main.h"
/* betty style doc for function main goes there */

/**
 * positive_or_negative- Determines if number is zero, positive of zero
 *n is the variable used to determine if the number is positve, zero or negative.
 * Return: Always 0 (Success)
 */

void positive_or_negative(int n)
{
	n = 0;


	srand(time(0));
	n = rand() - RAND_MAX / 2;
	/* your code goes there */
	if (n > 0)
	printf("%d is positive\n", n);
	else if (n == 0)
	printf("%d is zero\n", n);
	else
	printf("%d is negative\n", n);

}
