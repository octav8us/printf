#include "main.h"


/**
 * formatsp - called in _printf when format is specified
 *
 * @format: Pointer to the format string
 * @args: va_list containing the variable arguments
 * @n_printed: Pointer to the counter for printed characters
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
