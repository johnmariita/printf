#include <unistd.h>
#include <stdio.h>
#include "main.h"

/**
 * _printf - function that emulates the printf function
 * @format: the format string
 * Return: returns the number of characters printed
 */
int _printf(const char *format, ...)
{
	int k = 0, i = 0, count = 0;
	va_list argsp;

	va_start(argsp, format);
	if (format == NULL)
		return (-1);
	while (format[k])
	{
		if (format[k] == '%' && !format[k + 1])
			return (-1);
		k++;
	}
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			if (format[i] == '%')
			{
				count += _putchar('%');
				i++;
				continue;
			}
			else if (format[i] == 'R')
			{
				count += print_rot(va_arg(argsp, char *), count);
				i++;
				continue;
			}
			count = format_handler(format[i], argsp, count);
		}
		else
		{
			_putchar(format[i]);
			count++;
		}
		i++;
	}
	va_end(argsp);
	return (count);
}

/**
 * print_str - function that prints a string
 * @string: the string
 * @count: keeps record of the print count
 * @character: the ascii of the character
 * Return: returns the count of characters
 */
int print_str(char *string, int count, int character)
{
	int length = 0;

	if (!string)
	{
		write(1, "(null)", 6);
		count += 6;
		return (count);
	}
	if (character == 's')
	{
		for ( ; *string; string++)
		{
			_putchar(*string);
			count++;
		}
	}
	else if (character == 'r')
	{
		while (string[length])
			length++;
		length--;
		while (length >= 0)
		{
			count += _putchar(string[length]);
			length--;
		}
	}
	return (count);
}
