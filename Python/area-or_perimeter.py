#!/bin/python3

# If it is a square, return its area. If it is a rectangle, return its perimeter

def area_or_perimeter(l , w):
    if (l == w):
        return (l * w)
    else:
        return (2 * l + 2 * w)
