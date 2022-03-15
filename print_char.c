#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints a char using _putchar
 * @args: ptr to the va_list we are moving through
 * Return: return of _putchar, -1 if fail, 1 if success
 */
int print_char(va_list args)
{
	char c;
	int error;

	c = va_arg(args, int);
	if (c == NULL)
		return (0);
	error =	_putchar(c);
	if (error == -1)
		return (0);
	else
		return (1);
}
