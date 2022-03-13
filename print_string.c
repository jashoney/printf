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
	int count = 0, check = 0;

	c = va_arg(args, char *);
	if (c == NULL)
		c = "(NULL)";
	while (c[count] != '\0')
	{
		check = _putchar(c[count]);
		if (check == 1)
			count++;
	}
	return (count);
}
