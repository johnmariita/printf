#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>

#define BUFFER 1024
int _putchar(int c);
int _printf(const char *format, ...);
int print_str(char *string, int count, int character);
int print_num(int my_int, int count);
int print_bin(unsigned int num, int count);
int format_handler(char c, va_list ap, int count);
int print_uns(unsigned int num, int count);
int print_hex(unsigned int num, int count, int x);
int print_oct(unsigned int num, int count);
#endif
