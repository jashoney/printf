#include "main.h"
#include <stdarg.h>
#include <stdio.h>

/**
 * print_pointer - prints the address of a pointer
 * @args: ptr to the va_list
 * Return: count of digits printed
 */
int print_pointer(va_list args)
{
	int i = 0, count = 0;
	unsigned long p;
	unsigned int number = 0;
	char convert[] = "0123456789ABCDEF";
	char *hexarray;

	p = va_arg(args, unsigned long);
	_putchar('0');
	_putchar('x');
	while (p > 15)
	{
		hexarray[i] = convert[p % 16];
		p = p / 16;
		i++;
		count++;
	}
	hexarray[i] = convert[p % 16];
	count++;
	i++;
	while (i >= 0)
	{
		_putchar(hexarray[i]);
		i--;
	}
	return (count);
}
