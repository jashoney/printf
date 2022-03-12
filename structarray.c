#include "main.h"

/**
 * structarr - checks for valid specifier
 *@id_type: character to check
 * Return: pointer to function
 */

int (*structarr(char id_type))(va_list)
{

	int index;
	func_struct mystruct[] = {
		{'c', print_char},
		{'i', print_int},
		{'s', print_string},
		{'d', print_int},
		{'b', print_bin},
		{'x', print_l_hex},
		{'u', print_uns},
		{'o', print_oct},
		{'X', print_u_hex},
/*		{'p', print_void},*/
		{'\0', NULL},
	};

	for (index = 0; mystruct[index].ch != '\0'; index++)
	{
		if (mystruct[index].ch == id_type)
		{
			break;
		}
	}
	return (mystruct[index].f);
}
