#!/bin/bash
# Checks whether a number is even or not

is_even()
{
n=$n
rem=$((n%2))

if [ $rem == 0 ];
then
	return 1
else
	return 0
exit 0
fi
}
is_even

