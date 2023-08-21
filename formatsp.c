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
	case 'c':
		handle_character(args, n_printed);
		break;
	case '%':
		handle_percent(n_printed);
		break;
	default:
		handle_unknown(format + i, n_printed);
		break;

	}
	format += i;
}
