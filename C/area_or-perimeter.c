#include <stdio.h>

/**
 * area_or_perimeter - Returns the area or perimeter of a quadrilateral.
 *
 * @l: length
 * @w: width (if rectangle) or length (if square)
 * Return: Always 0 (Success)
 */

int area_or_perimeter(int l, int w)
{
	int perimeter = 2 * (l + w);
	int area = (l * w);

	if (l == w)
	{
		return (area);
	}
	else
	{
		return (perimeter);
	}
	return (0);
}
