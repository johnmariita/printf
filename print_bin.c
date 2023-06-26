#include <stdlib.h>
#include <stdio.h>
#include "main.h"

/**
 * print_bin - function that prints the binary of an integer
 * @num: the integer to be printed
 * @count: keeping record of the characters printed to the stdout
 * Return: returns the count of characters printed
 */
int print_bin(unsigned int num, int count)
{
	int i = 0, index, length = 0;
	unsigned int temp = num, rem;
	char buffer[1024];

	while (temp > 0)
	{
		temp /= 2;
		length++;
	}
	index = length - 1;
	while (num > 0)
	{
		rem = num % 2;
		buffer[index] = rem + '0';
		num /= 2;
		index--;
	}
	buffer[length] = '\0';
	while (buffer[i])
	{
		_putchar(buffer[i]);
		count++;
		i++;
	}
	return (count);
}
