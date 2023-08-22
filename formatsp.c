#include "main.h"

/**
 * formatsp - called in _printf when a format is specified
 * @format: ptr to format string
 * @args: the variable arguments of type va_list
 * @n_printed: ptr to n_printed counter
 */


void formatsp(const char *format, va_list args, int *n_printed)
{
	int i = 0;

	i++;
	switch (format[i])
	{
	case 's':
		handle_string(va_arg(args, char *), n_printed);
		break;
	case 'S':
		handle_non_printable_string(va_arg(args, char *), n_printed);
		break;
	case 'c':
		handle_character(va_arg(args, int), n_printed);
		break;
	case 'R':
		handle_rot13(va_arg(args, char *), n_printed);
		break;
	case 'd':
		handle_decimal(args, n_printed);
		break;
	case 'i':
		handle_int(args, n_printed);
		break;
	case 'b':
		handle_binary(args, n_printed);
		break;
	case '%':
		handle_percent(n_printed);
		break;
	case '\0':
		break;
	default:
		handle_unknown(format + i, n_printed);
		break;

	}
}
