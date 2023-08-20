#include "main.h"

/**
 * formatsp - called in _printf when format is specified
 * @format: ptr to format string
 * @args: va_list containing the variable arguments
 * @n_printed: ptr to n_printed counter
 */
void formatsp(const char *format, va_list args, int *n_printed)
{
	char *str, ch;
	int i = 0;

	i++; /* Move to next char after '%' */
	if (format[i] == 's')/*String literal*/
	{
		str = va_arg(args, char *);
		while (*str)
		{
			_putchar(*str, 1);
			str++; /* Next char within the string */
			(*n_printed)++;
		}
	}
	else if (format[i] == 'c')/*Char*/
	{
		ch = va_arg(args, int);
		_putchar(ch, 1);
		(*n_printed)++;
	}
	else if (format[i] == '%')/*%%*/
	{
		_putchar('%', 1);
		(*n_printed)++;
		format++;
	}
	else
	{
		_putchar('%', 1);
		_putchar(format[i], 1);
		(*n_printed) += 2;
		format++;
	}
	format += i;
}
