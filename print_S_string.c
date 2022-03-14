#include "main.h"
#include <stdarg.h>

/**
 * print_S_string - prints a string using _putchar, modified for S chars
 * @args: ptr to the va_list we are moving through
 * Return: strlen
 */
int print_S_string(va_list args)
{
	unsigned int count = 0, i = 0;
	char *c;
	char *convert = "0123456789ABCDEF";

	c = va_arg(args, char *);
	if (c == NULL)
		c = "(NULL)";
	while (c[i] != '\0')
	{
		if (c[i] < 32 || c[i] > 126)
		{
			count = count + 4;
			_putchar(92);
			_putchar('x');
			if (c[i] < 16)
			{
				_putchar('0');
				_putchar(convert[c[i] + 0]);
			}
			else if (c[i] > 126)
			{
				_putchar('7');
				_putchar('F');
			}
			else
			{
				_putchar('1');
				c[i] = c[i] % 16;
				_putchar(convert[c[i] + '0']);
			}
		}
		else
		{
			_putchar(c[i]);
			count++;
		}
		i++;
	}
	return (count);
}
