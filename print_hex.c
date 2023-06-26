#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_hex - function to print a hexadeximal
 * @num: the integer in decimal
 * @count: keeps count of characters printed
 * @x: either 'x' or 'X'
 * Return: returns the characters printed
 */
int print_hex(unsigned int num, int count, int x)
{
	int i = 0, length = 0, index, rem;
	char buffer[1024];
	unsigned int temp = num;

	while (temp > 0)
	{
		temp /= 16;
		length++;
	}
	index = length - 1;
	while (num > 0)
	{
		rem = num % 16;
		if (rem >= 0 && rem <= 9)
			buffer[index] = rem + '0';
		else
		{
			if (x == 'x')
				buffer[index] = rem + ('a' - 10);
			else if (x == 'X')
				buffer[index] = rem + ('A' - 10);
		}
		num /= 16;
		index--;
	}
	buffer[length] = '\0';
	while (buffer[i])
	{
		_putchar(buffer[i]);
		i++;
		count++;
	}
	return (count);
}
