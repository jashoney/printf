#include "main.h"
#include <stdarg.h>

/**
 * print_string - prints a string using _putchar
 * @args: ptr to the va_list we are moving through
 * Return: strlen
 */
int print_string(va_list args)
{
	char *c;
	int count = 0;

	c = va_arg(args, char *);
	if (c == NULL)
		c = "(NULL)";
	while (c[count] != '\0')
		count = count + _putchar(c[count]);
	return (count);
}
