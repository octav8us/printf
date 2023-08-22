#include "main.h"
/**
 * formatsp - called in _printf when a format is specified
 * @format: ptr to format string
 * @args: the variable arguments of type va_list
 * @n_printed: ptr to n_printed counter
 */
void formatsp(const char *format, va_list args, int *n_printed)
{
	int i = 0, ch;
	char *str;

	i++;
	switch (format[i])
	{
	case 's':
	case 'S':{
			str = va_arg(args, char *);
			nullable_string(str, n_printed);
		}
		break;
	case 'c':{
			ch = va_arg(args, int);
			if (ch != 0)
			{
				_putchar(ch, 1);
				*n_printed += 1;
			}
		}
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
	default:
		handle_unknown(format + i, n_printed);
		break;
	}
	format += i;
}
