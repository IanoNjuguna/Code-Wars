#include <stdio.h>

/**
 * other_angle - given two interior angles (in degrees) of a triangle,
 *		write a function to return the 3rd.
 *		Note: only positive integers will be tested.
 *
 * @a: The interior angles we know
 * @b: The other interior angle we know
 * Return: other_angle
 */

int other_angle(int a, int b)
{
	return (180 - a - b);
}

