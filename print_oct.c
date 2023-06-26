#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_oct - function that prints a number in octal
 * @num: the number to be printed in octal
 * @count: keeps count of the characters printed
 * Return: returns the characters printed
 */
int print_oct(unsigned int num, int count)
{
	int i = 0, length = 0, index;
	unsigned int temp = num, rem;
	char buff[1024];

	while (temp > 0)
	{
		temp /= 8;
		length++;
	}
	index = length - 1;
	while (num > 0)
	{
		rem = num % 8;
		buff[index] = rem + '0';
		num /= 8;
		index--;
	}
	buff[length] = '\0';
	while (buff[i])
	{
		_putchar(buff[i]);
		i++;
		count++;
	}
	return (count);
}
