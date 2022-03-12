#include "main.h"
#include <stdarg.h>

/*
 * print_int - prints an int using _putchar
 * @args: ptr to the va_list
 * Return: count of digits
 */
int print_uns(va_list args)
{
        int i = 0, count = 0, init_number; 
        unsigned int number = 0;
	int numarray[20];

	number = va_arg(args, unsigned int);
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
