#include "main.h"
#include <stdarg.h>

/*
 * print_int - prints an int using _putchar
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
	while (i >= 0)
	{
		_putchar(binarray[i] + '0');
		i--;
	}
        return (count);
}
