#include "main.h"
/**
 * _printf - writes to stdout according to data format.
 * @format: string to be written. may/may not have format specifiers.
 * Return: num of char printed, excluding '\0' (success).
 * OR -1 (error).
 */
int _printf(const char *format, ...)
{
	int i = 0, n_printed = 0;
	va_list args;


	if ((!format))
		return (-1);

	va_start(args, format);
	while (format[i])/* Iterate through arguments */
	{
		if (format[i] == '%') /*An accepted format specified */
		{
			if (format[i + 1] == '\0')
			{
				va_end(args);
				return (-1);

			}
			formatsp(format + i, args, &n_printed);
			i++;/*Skip the actual fmt specifier*/
		}
		else if (format[i] == '\0')
		{
			break;
		}
		else /* No format specifier */
		{
			_putchar(format[i], 1);
			n_printed++;
		}
		i++;
	}
	va_end(args);

	return (n_printed);
}
