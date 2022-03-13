#include "main.h"
#include <stdarg.h>

/**
 * print_bin - translates binary from an int and prints it
 * @args: ptr to the va_list
 * Return: count of digits
 */
int print_bin(va_list args)
{
	int i = 0, count = 0;
	unsigned int number = 0;
	int binarray[100];

	number = va_arg(args, unsigned int);
	while (number > 1)
	{
		binarray[i] = number % 2;
		count++;
		i++;
		number = number / 2;
	}
	binarray[i] = number;
	count++;
	while (i >= 0)
	{
		_putchar(binarray[i] + '0');
		i--;
	}
	return (count);
}
