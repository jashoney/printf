#include "main.h"
#include <stdarg.h>

/**
 * print_int - prints an int using _putchar
 * @args: ptr to the va_list
 * Return: count of digits printed
 */
int print_int(va_list args)
{
	int i = 0, count = 0, init_number;
	int numbers[20];
	unsigned int number = 0;

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
		numbers[i] = number % 10;
		count++;
		i++;
		number = number / 10;
	}
	numbers[i] = number;
	count++;
	while (i >= 0)
	{
		_putchar(numbers[i] + '0');
		i--;
	}
	return (count);
}
