#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints a char using _putchar
 * @args: ptr to the va_list we are moving through
 * Return: 1
 */
int print_char(va_list args)
{
        char c;

        c = va_arg(args, int);
        _putchar(c);
        return (1);
}
