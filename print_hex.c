#include "main.h"
/**
 * main: print_x - takes an unsigned int and prints it in lowercase hex notation
 * description:
 * @x: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_x(va_list x)
{
	return (print_hex(va_arg(x, unsigned int), 0));
}

/**
 * main: print_X - takes am unsigned int and prints it in uppercase hex notation
 * description:
 * @X: unsigned int to print
 *
 * Return: number of digits printed
 */
int print_X(va_list X)
{
	return (print_hex(va_arg(X, unsigned int), 1));
}

