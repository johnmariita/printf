#include <unistd.h>
#include "main.h"

/**
 * _putchar - function that prints a characcter to the standard output
 * @c: the character to be printed
 * Return: returns 1 on success, -1 on error
 */
int _putchar(int c)
{
	return (write(1, &c, 1));
}
