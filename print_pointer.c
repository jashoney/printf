#include "main.h"
#include <stdarg.h>

/**
 * print_pointer - prints the address of a pointer
 * @args: ptr to the va_list
 * Return: count of digits printed
 */
int print_pointer(va_list args)
{
	int i = 0, count = 0;
	unsigned long hex;
	char *convert = "0123456789abcdef";
	char hexarray[20];

	hex = va_arg(args, unsigned long);
	_putchar('0');
	_putchar('x');
	count = 2;
	while (hex > 15)
	{
		hexarray[i] = convert[hex % 16];
		hex = hex / 16;
		i++;
	}
	hexarray[i] = convert[hex % 16];
	while (i >= 0)
	{
		_putchar(hexarray[i]);
		count++;
		i--;
	}
	return (count);
}
