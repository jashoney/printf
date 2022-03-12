#include "main.h"

/**
 * structarr - checks for valid specifier
 *@format: character to check
 * Return: pointer to function
 */

int (*structarr(const char *format))(va_list)
{

	int index;
	func_struct mystruct[] = {
		{"c", print_char},
		{"i", print_int},
		{"s", print_string},
		{NULL, NULL},
	};

	for (index = 0; mystruct[index].ch != NULL; index++)
	{
		if (*(mystruct[index].ch) == *format)
		{
			break;
		}
		return (mystruct[index].f);
	}
}
