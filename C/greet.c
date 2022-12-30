#include <stdio.h>

/**
 * greet - Returns 'hello world!'
 *
 * Return: Always 0 (Success)
 */

const char *greet(void)
{
	return ("hello world!");
}

/**
 * main - Testing the greet() function
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	printf("%s\n", greet());
	return (0);
}

