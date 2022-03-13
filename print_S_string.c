#include "main.h"
#include <stdarg.h>

/**
 * print_S_string - prints a string using _putchar, modified for S chars
 * @args: ptr to the va_list we are moving through
 * Return: strlen
 */
int print_S_string(va_list args)
{
	unsigned int count = 0, hexnumber;
	char dest[3] = "00", *c;
	char *convert = "0123456789ABCDEF";

	c = va_arg(args, char *);
	if (c != NULL)
	{
		while (*c != '\0')
		{
			if (*c < 32 || *c > 126)
			{
				count = count + 4;
				_putchar(92);
				_putchar('x');
				if (*c < 16)
				{
					_putchar('0');
					_putchar(convert[*c + 0]);
				}
				else
				{
					hexnumber = *c % 16;
					dest[1] = (convert[hexnumber + '0']);
					hexnumber = *c / 16;
					dest[0] = (convert[hexnumber + '0']);
					_putchar(dest[0]);
					_putchar(dest[1]);
					printf("*c > 16");
				}
			}
			else
			{
				_putchar(*c);
				count++;
			}
			c++;
		}
	}
	return (count);
}
