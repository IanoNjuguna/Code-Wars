#!/bin/bash
# Checks whether a variable is greater than, equal to or lesser than 10

n=$1

if [[ $1 -gt 10 || $1 -eq 10 ]]
then
	echo "Great, now move on to tricks"
else
	echo "Keep at it until you get it"
exit 0
fi

