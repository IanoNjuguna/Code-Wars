#include <stdio.h>

/**
 * simple_multiplication - Multiply an even number by 8 and 9 if otherwise
 *
 * @number: Contains the integer to be checked
 * Return: Depends on whether int is even or odd
 */

int simple_multiplication(int number)
{
	if ((number % 2) == 0)
	{
		return (number * 8);
	}

	else
	{
		return (number * 9);
	}
}


