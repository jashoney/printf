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
	int i, count = 0;

	c = va_arg(args, char *);
	if (c == NULL)
	{
		c = "(NULL)";
		count = 6;
	}
	else
	{
		while (c[i] != '\0')
			i++;
		count = i;
		i = 0;
	}
	while (c[i] != '\0')
	{
		_putchar(c[i]);
		i++;
	}
	return (count);
}
