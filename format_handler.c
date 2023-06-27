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
			count += _putchar(va_arg(ap, int));
			break;
		case 'i':
		case 'd':
			count = print_num(va_arg(ap, int), count);
			break;
		case 's':
		case 'r':
			count = print_str(va_arg(ap, char *), count, c);
			break;
		case 'S':
			count = non_print(va_arg(ap, char *), count);
			break;
		case 'b':
			count = print_bin(va_arg(ap, unsigned int), count);
			break;
		case 'u':
			count = print_uns(va_arg(ap, unsigned int), count);
			break;
		case 'x':
		case 'X':
			count = print_hex(va_arg(ap, unsigned int), count, c);
			break;
		case 'o':
			count = print_oct(va_arg(ap, unsigned int), count);
			break;
		case 'p':
			count = print_addr(va_arg(ap, unsigned long int), count);
			break;
		default:
			count += _putchar('%');
			count += _putchar(c);
			break;
	}
	return (count);
}
