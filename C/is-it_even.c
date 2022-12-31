#include <stdbool.h>
#include <math.h>

/**
 * is_even - Checks whether number is even or not
 *
 * @n: value to be checked
 * Return: Always 0 (Success)
 */

bool is_even(double n)
{
	if (fmod(n, 2) == 0)
	{
		return (true);
	}
	else
	{
		return (false);
	}
	return (0);
}

