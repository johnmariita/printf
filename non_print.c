#include <stdio.h>
#include <unistd.h>
#include "main.h"

int non_print(char *str, int count)
{
	while (*str)
	{
		if (*str >= 32 && *str <= 126)
			count += _putchar(*str);
		else
		{
			count += _putchar('\\');
			count += _putchar('x');
			_putchar((*str / 16) < 10 ? (*str / 16) + '0' : (*str / 16) + 'A' - 10);
			_putchar((*str & 0xF) < 10 ? (*str & 0xF) + '0' : (*str & 0xF) + 'A' - 10);
			count += 2;
		}
		str++;
	}
	return (count);
}
