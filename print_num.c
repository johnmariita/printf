#include <stdlib.h>
#include "main.h"

/**
 * print_num - function that prints an integer
 * @my_int: the integer to be printed
 * @count: the count of characters
 * Return: returns the count of the digits printed
 */
int print_num(int my_int, int count)
{
	int digit, c, num_cpy, i = 0, divisor = 1;

	if (my_int < 0)
	{
		_putchar('-');
		count++;
		my_int *= -1;
	}
	num_cpy = my_int;
	while (my_int > 0)
	{
		my_int /= 10;
		i++;
	}
	for (c = 0; c < i - 1; c++)
		divisor *= 10;
	while (divisor > 0)
	{
		digit = num_cpy / divisor;
		num_cpy %= divisor;
		divisor /= 10;
		_putchar(digit + '0');
		count++;
	}
	return (count);
}
