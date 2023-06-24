#include <stdlib.h>
#include "main.h"

int print_num(int my_int, int count)
{
	int c, num_cpy = my_int, i = 0, divisor = 1;

	while (my_int > 0)
	{
		my_int /= 10;
		i++;
	}
	for (c = 0; c < i - 1; c++)
		divisor *= 10;
	while (divisor > 0)
	{
		int digit = num_cpy / divisor;
		num_cpy %= divisor;
		divisor /= 10;
		_putchar(digit + '0');
		count++;
	}
	return (count);
}
