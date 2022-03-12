#include "main.h"
#include <stdarg.h>

/**
 * print_oct - prints an int in octadecimal
 * @args: ptr to the va_list
 * Return: count of digits
 */
int print_oct(va_list args)
{
	int i = 0, count = 0, init_number;
	unsigned int number = 0;
	int octarray[20];

	number = va_arg(args, unsigned int);
	while (number > 7)
	{
		octarray[i] = number % 8;
		count++;
		i++;
		number = number / 8;
	}
	octarray[i] = number;
	while (i >= 0)
	{
		_putchar(octarray[i] + '0');
		i--;
	}
	return (count);
}
