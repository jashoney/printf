#include "main.h"
#include <stdarg.h>
/**
* print_rev - print a reverse a string
* @x: string
* Return: bytes printed
**/
int print_rev(va_list args)
{
	char *s;
	int i = 0, count;

	s = va_arg(args, char*);
	while (s[i] != '\0')
	{
		i++;
	}
	count = i;
	while (i - 1 >= 0)
	{
		_putchar(s[i - 1]);
		i--;
	}
	return (count);
}
