#include <stdio.h>
#include <stdlib.h>
#include "main.h"

/**
 * print_uns - function that prints an unsigned integer
 * @num: the unsigned integer
 * @count: keeps record of the count
 * Return: returns the number of characters printed
 */
int print_uns(unsigned int num, int count)
{
	char buffer[1024];
	int length = 0;
	int index;
	unsigned int temp = num;
	int i = 0;

	while (temp > 0)
	{
		temp /= 10;
		length++;
	}
	index = length - 1;
	while (num > 0)
	{
		buffer[index] = '0' + (num % 10);
		num /= 10;
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
