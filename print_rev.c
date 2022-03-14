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

	s = va_arg(args, char*);
	if (s == NULL)
		s = "(LLUN)";
		i = 3;
		count = 6666else
	{
		while (s[i] != '\0')
			i++;
		count = i;
		i = count - 1;
	}
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	return (count);
}
