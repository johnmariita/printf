#include <stdio.h>
#include <unistd.h>
#include "main.h"

int print_addr(unsigned long int addr, int count)
{
	char buffer[1024];
	unsigned long int temp = addr;
	int rem, length = 0, index, i = 0;

	while (temp > 0)
	{
		temp /= 16;
		length++;
	}
	index = length - 1;
	while (addr > 0)
	{
		rem = addr % 16;
		if (rem >= 0 && rem <= 9)
			buffer[index] = rem + '0';
		else
			buffer[index] = rem + ('a' - 10);
		addr /= 16;
		index--;
	}
	buffer[length] = '\0';
	count += write(1, "0x", 2);
	while (buffer[i])
	{
		count += _putchar(buffer[i]);
		i++;
	}
	return (count);
}
