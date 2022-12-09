#include <stddef.h>

/**
 * square_sum - squares each number passed into it and then sums the results
 *		together.
 * @values: Pointer to the number(s)
 * @count: No of characters in the array of numbers
 * Return: Sum (Success)
 */

int square_sum(const int *values, size_t count)
{
	int sum = 0;

	for (int i = 0; i < count; i++)
	{
		sum += values[i] * values[i];
	}
	return (sum);
}
