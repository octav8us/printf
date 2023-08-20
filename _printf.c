#include "main.h"

/**
 * _printf - writes to stdout according to data format
 * @format: string to be written. may/may not have format specifiers
 * Return: num of char printed, excluding '\0'
 */
int _printf(const char *format, ...)
{
	char *str;
	int i = 0, n_printed = 0;
	va_list args;
	unsigned char temp;

	if (!format) /*NULL value passed*/
		return (-1);
	else /*Valid arguments*/
	{
		va_start(args, format);
		while (format[i])/*Iterate through argmuments*/
		{
			if (format[i] == '%') /*Format specifier*/
			{
				i++; /*Move to next char*/
				switch (format[i])
				{
				case 's':
				{
					str = va_arg(args, char *);
					while (*str)
					{
						_putchar(*str, 1);
						str++;
						n_printed++;
					}
					break;
				}
				case 'c':
				{
					temp = va_arg(args, int);
					_putchar(temp, 1);
					n_printed++;
					break;
				}
				case '%':
				{
					_putchar('%',1);
					n_printed++;
					break;

				}


				}

			}
			else /*No format specifier*/
			{
				_putchar(format[i], 1);
				n_printed++;
			}
			i++;
		}
	}
	va_end(args);

	return (n_printed);
}
