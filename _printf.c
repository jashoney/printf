#include "main.h"
#include <stdlib.h>
#include <stdarg.h>
/**
 * _printf - a function that prints a string using _putchar
 * @format: the fixed string to print
 * Return: the count of the chars in the string
 */

int _printf(const char *format, ...)
{
	int count = 0, i = 0;				/* we return (count = strlen(output) */
	int (*f)(va_list);				/* f is a ptr to a f() */
	va_list args;					/* args is of type va_list */

	if (format == NULL)				/* test format for NULL */
		return (0);
	va_start(args, format);				/* start moving through vargs after format */
	for (i = 0; format[i] != '\0'; i++)		/* move across format */
	{
		count++;				/* assum printing current char, remove if not */
		if (format[i] == '%')			/* if yes, check the next char in format */
		{
			if (format[i + 1] == '%' ||
				format[i + 1] == '\0')  /* next char is % or end of string */
			{
				_putchar(format[i]);		/* print the % */
				if (format[i + 1] == '\0')	/* stop if at end of string */
					return (count);
				i++;				/* next char = %, but don't print it */
			}
			else					/* check for identifier using format[i + 1] */
			{
				f = structarr(format[i + 1]);   /* set f to a function or NULL */
				if (f != NULL)			/* if f is not NULL it contains the function to use */
				{
					count--;			/* we're not printing the % */
					count = count + f(args);	/* length of print by f() call added */
					i++;				/* move on to next char after identifier */
				}
				else
					_putchar(format[i]);	/* identifier not found, print the % */
			}
		}
		else
			_putchar(format[i]);		/* print current char in string format */
	}
	va_end(args);					/* free up the va_list */
	return (count);					/* _printf returns the total of the chars printed */
}
