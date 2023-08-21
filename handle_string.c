#include "main.h"



/**
 * handle_string - Handle the 's' format specifier
 *
 * @str: The string to be printed
 * @n_printed: Pointer to the counter for printed characters
 */
void handle_string(const char *str, int *n_printed)
{
	while (*str)
	{
		_putchar(*str, 1);
		(*n_printed)++;
		str++;
	}
}
