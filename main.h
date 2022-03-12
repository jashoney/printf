#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

typedef struct funcstruct
{
	char *ch;
	int (*f)(va_list);
}func_struct;
int (*structarr(const char *format))(va_list);
int print_char(va_list *vargs);
int print_string(va_list *vargs);
int _printf(const char *format, ...);
int _putchar(char c);
int print_string(va_list *args);
#endif
