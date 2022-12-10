#include <math.h>
#include <stdio.h>

/**
 * cockroach_speed - Takes speed in km/h and returns it in cm/h, floored.
 *
 * @s: Speed in km/h
 * @speed_cmh: Speed in cm/h
 * Return: speed_cmh (Success)
 */

int cockroach_speed(double s, int speed_cmh)
{
	speed_cmh = floor(s * 27.7778);

	return (speed_cmh);
}

