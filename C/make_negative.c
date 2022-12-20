#include <stdio.h>

/**
 * makeNegative - Returns a negative int type
 *
 * @num: Value to be checked and returned. Can be negative or positive or 0
 *
 * Return: Always 0 (Success)
 * Author: IanoNjuguna
 */

int makeNegative(int num)
{
	if (num > 0)
	{
		return (num * -1);
	}
	else if (num == 0)
	{
		return (0);
	}
	else
	{
		return (num);
	}
	return (0);
}

