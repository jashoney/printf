#ifndef MAIN_H
#define MAIN_H

#include <stdarg.h>
#include <stdio.h>

/**
 * struct funcstruct - type of structure
 *@ch: pointer to argument
 * @f: pointer to function of argument
 */
typedef struct funcstruct
{
	char ch;
	int (*f)(va_list);
} func_struct;

int print_rot(va_list args);
int print_S_string(va_list args);
int (*structarr(char ch))(va_list);
int print_char(va_list vargs);
int print_string(va_list vargs);
int _printf(const char *format, ...);
int _putchar(char c);
int print_int(va_list args);
int print_uns(va_list args);
int print_oct(va_list args);
int print_bin(va_list args);
int print_l_hex(va_list args);
int print_u_hex(va_list args);

#endif
