#include <stdio.h>
#include "main.h"

int print_rot(char *str, int count)
{
	char *norm =
		"ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char *rot13 =
		"NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";
	char buffer[1024];
	int i = 0, j = 0, k = 0;

	while (str[i])
	{
		while (norm[j] && j <= 51)
		{
			if (norm[j] == str[i])
			{
				buffer[i] = rot13[j];
				j = 0;
				i++;
				continue;
			}
			j++;
		}
	}
	buffer[i] = '\0';
	while (buffer[k])
	{
		count += _putchar(buffer[k]);
		k++;
	}
	return (count);
}
