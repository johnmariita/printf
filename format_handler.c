#include <stdio.h>
#include "main.h"

/**
 * format_handler - function that checks for a format specifier
 * @c: the format specifier
 * @ap: pointer to the format i.e va_list
 * @count: keeps record of the count
 * Return: returns the count
 */
int format_handler(char c, va_list ap, int count)
{
	switch (c)
	{
		case 'c':
			_putchar(va_arg(ap, int));
			count++;
			break;
		case 'i':
		case 'd':
			count = print_num(va_arg(ap, int), count);
			break;
		case 's':
			count = print_str(va_arg(ap, char *), count);
			break;
		case 'b':
			count = print_bin(va_arg(ap, int), count);
			break;
		case '%':
			_putchar('%');
			break;
		default:
			_putchar('%');
			_putchar(c);
			break;
	}
	return (count);
}
