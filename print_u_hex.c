#include "main.h"
#include <stdarg.h>

/**
 * print_u_hex - converts from base 10 to base 16 and prints
 * @args: ptr to the va_list
 * Return: count of digits printed
 */
int print_u_hex(va_list args)
{
	int i = 0, count = 0;
	unsigned int number = 0;
	char hexarray[20];
	char *convert = "0123456789ABCDEF";

	number = va_arg(args, unsigned int);
	while (number > 15)
	{
		hexarray[i] = convert[number % 16];
		number = number / 16;
		i++;
		count++;
	}
	hexarray[i] = convert[number % 16];
	count++;
	while (i >= 0)
	{
		_putchar(hexarray[i]);
		i--;
	}
	return (count);
}
