#include <stdlib.h>
#include "main.h"

/**
 * print_bin - function that prints the binary of an integer
 * @num: the integer to be printed
 * @count: keeping record of the characters printed to the stdout
 * Return: returns the count of characters printed
 */
int print_bin(int num, int count)
{
	if (num == 1)
	{
		_putchar('1');
		return (count + 1);
	}
	else if (num == 0)
	{
		_putchar('0');
		return (count + 1);
	}
	count = print_bin(num >> 1, count);
	_putchar(num & 1 ? '1' : '0');
	return (count);
}