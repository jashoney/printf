#include "main.h"
#include <stdarg.h>

/**
 * print_int - prints an int using _putchar
 * @args: ptr to the va_list
 * Return: count of digits
 */
int print_int(va_list *vargs)
{
        int number, count = 0;

        number = va_arg(*vargs, int);
        if (number < 0)
        {
                _putchar('-');
                count++;
                number = number * -1;
        }
        while (number > 9)
        {
                putchar(number % 10 + '0');
                count++;
                number = number / 10;
        }
        _putchar(number + '0');
        count++;
        return (count);
}
