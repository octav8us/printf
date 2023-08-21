#include "main.h"




/**
 * handle_character - Handle the 'c' format specifier
 *
 * @args: va_list containing the variable arguments
 * @n_printed: Pointer to the counter for printed characters
 */
void handle_character(va_list args, int *n_printed)
{
	char ch = va_arg(args, int);

	_putchar(ch, 1);
	(*n_printed)++;

}
