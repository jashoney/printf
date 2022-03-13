#include "main.h"

/**
 * print_rot13 - print a string encoded in rot13
 * @args: the va_list with the string to print as the next element
 * Return: count
 */
int print_rot(va_list args)
{
	int count = 0;
	int i;
	char *p = va_arg(args, char *);

	for (i = 0; p[i] != '\0'; i++)
	{
		if ((p[i] >= 'a' && p[i] <= 'z') ||
		    (p[i] >= 'A' && p[i] <= 'Z'))
		{
			if ((p[i] >= 'n' && p[i] <= 'z') ||
			    (p[i] >= 'N' && p[i] <= 'Z'))
				count += _putchar(p[i] - 13);
			else
				count += _putchar(p[i] + 13);
		}
		else
			count += _putchar(p[i]);
	}
	return (count);
}
