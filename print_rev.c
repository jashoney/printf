#include "main.h"
#include <stdarg.h>
/**
* print_rev - print a reverse a string
* @args: string
* Return: bytes printed
**/
int print_rev(va_list args)
{
	char *s;
	int i = 0, count;

	if (s == NULL)
	{
		return (0);
	}
	s = va_arg(args, char*);
	while (s[i] != '\0')
	{
		i++;
	}
	count = i;
	i = count - 1;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	return (count);
}
