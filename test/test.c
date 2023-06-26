#include <stdlib.h>
#include <stdio.h>
#include "../main.h"

int dec_to_hex(int num)
{
	int rem = num % 16;
	if (num / 16 > 0)
		dec_to_hex(num / 16);
	if (rem >= '0' && rem <= '9')
		putchar(rem + '0');
	else
		putchar(rem + ('a' - 10));
}
int main(void)
{
	int x = _printf("alx");
	_printf(" %s", "alx");
	_printf(" %c", 'c');
	_printf(" %d", x);
	return (0);
}
