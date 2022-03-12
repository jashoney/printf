#include "main.h"

/**
 * structarr - checks for valid specifier
 *@format: character to check
 * Return: pointer to function
 */

int (*structarr(char *format))(va_list)
{

	int index;
	func_struct mystruct[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{"d", print_int},
		{"x", print_hex},
		{"u", print_uns),
		("x", print_hex),
		("o", print_oct),
		("X", print_hex),
		{'\0', NULL},
	};

	for (index = 0; mystruct[index].ch != '\0'; index++)
	{
		if (*(mystruct[index].ch) == *format)
		{
			break;
		}
		return (mystruct[index].f);
	}
}
