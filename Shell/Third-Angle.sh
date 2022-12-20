#!/bin/bash
# Given two interior angles (in degrees) of a triangle, write a function to
# return the 3rd

function thirdAngle {
  echo $((180 - $1 - $2))
}

