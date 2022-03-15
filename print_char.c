#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints a char using _putchar
 * @args: ptr to the va_list we are moving through
 * Return: return of _putchar, -1 if fail, 1 if success
 */
int print_char(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}
