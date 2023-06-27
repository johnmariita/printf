#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
#include "../main.h"

int dec_to_hex(int num)
{
	int rem = num % 16;
	if (num / 16 > 0)
		dec_to_hex(num / 16);
	if (rem >= 0 && rem <= 9)
		putchar(rem + '0');
	else
		putchar(rem + ('a' - 10));
}
int main(void)
{
	unsigned int ui = (unsigned int)INT_MAX + 1024;
	_printf("Unsigned octal:[%o]\n", ui);
	int x = _printf("%d\n", 98);
	printf("% d\n", x);
	printf("%s", "alx");
	_printf("Unsigned hexadecimal:[%x, %X]\n", ui, ui);
	_printf("Unsigned:[%u]\n", ui);
	_printf("Unsigned octal:[%o]\n", 3887);
	_printf("%");
}
