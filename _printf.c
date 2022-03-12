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
	int count = 0, i = 0, j = 0;			/* we return (count = strlen(format)) + loop variables */
	int (*f)(va_list);				/* f is a ptr to a function that takes a va_list type as input and returns an int */
	va_list args;					/* args is of type va_list */

	if (format == NULL)				/* test format for NULL */
		return (-1);
	va_start (args, format);			/* start moving through vargs after format */
	for (i = 0; format[i] != '\0'; i++)		/* move across format */
	{	
		count++;
		if (format[i] == '%')
		{
			if (format[i + 1] == '%' || format[i + 1] == '\0')  /* next char is % or end of string */
			{
				_putchar(format[i]);		/* print the % */
				if (format[i + 1] == '\0')	/* stop if at end of string */
					return (count);
				i++;				/* ignore the second % */
			}
			else 					/* check for identifier */
			{
				f = structarr(format[i + 1]);   /* if f not null then it contains the function to call */
				if (f != NULL)
				{	
					count = count - 1;		/* count now doesn't include the % */
					count = count + f(args);	/* count increased by length of print by function call */
					i++;				/* move to next char as we used i + 1 as well */
				}
				else
					_putchar(format[i]);	/* identifier not found, print the % */
			}
		}
		else
			_putchar(format[i]);  		/* print current char in string format */
	}
	va_end(args);					/* free up the va_list */
	return (count);
}
