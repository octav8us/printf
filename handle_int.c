#include "main.h"

/**
 * handle_int - Handle the 'i' format specifier
 *
 * @args: The args to be printed
 * @n_printed: Pointer to the counter for printed characters
 */


void handle_int(va_list args, int *n_printed)
{

	handle_decimal(args, n_printed);
}
