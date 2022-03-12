#include "main.h"
#include <stdarg.h>

/*
 * print_int - prints an int using _putchar
 * @args: ptr to the va_list
 * Return: count of digits
 */
int print_hex(va_list args)
{
        int i = 0, count = 0; 
        unsigned int number = 0;
	char hexarray[10];
	char *convert = "123456789abcdef";

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
	i++;
	while (i >= 0)
	{
		_putchar(hexarray[i] + '0');
		i--;
	}
        return (count);
}
