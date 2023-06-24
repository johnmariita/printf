#include <stdarg.h>
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
	int i = 0, count = 0, my_int;
	char *string;
	va_list argsp;

	va_start(argsp, format);
	while (format[i])
	{
		if (format[i] == '%')
		{
			i++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(argsp, int));
					count++;
					break;
				case 's':
					string = va_arg(argsp, char *);
					count = print_str(string, count);
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				case 'd':
					my_int = va_arg(argsp, int);
			}
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
 * Return: returns the count of characters
 */
int print_str(char *string, int count)
{
	if (!string)
	{
		write(1, "(null)", 6);
		count += 4;
		return (count);
	}
	for ( ; *string; string++)
	{
		_putchar(*string);
		count++;
	}
	return (count);
}
