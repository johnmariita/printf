#include <stdio.h>
#include "../main.h"

int main()
{
	void *addr;
	addr = (void *)0x7ffe637541f0;
	_printf("Address:[%p]\n", addr);
	_printf("%%%%\n");
	_printf("%S\n", "BEST\nSCHOOL");
	_printf("%S\n", "ALX\nSE");
}
