#include "main.h"
#include <stdarg.h>

/**
 * print_int - prints an int using _putchar
 * @args: ptr to the va_list
 * Return: count of digits
 */
int print_int(va_list args)
{
	int i = 0, count = 0, init_number;
	unsigned int number = 0;
	int numarray[20];

	init_number = va_arg(args, int);
	if (init_number < 0)
	{
		_putchar('-');
		count++;
		number = init_number * -1;
	}
	else
		number = init_number;
	while (number > 9)
	{
		numarray[i] = number % 10;
		count++;
		i++;
		number = number / 10;
	}
	numarray[i] = number;
	while (i >= 0)
	{
		_putchar(numarray[i] + '0');
		i--;
	}
	return (count);
}
