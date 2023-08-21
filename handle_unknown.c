#include "main.h"

/**
 * handle_unknown - Handle unknown format specifiers
 *
 * @format: Pointer to the format specifier
 * @n_printed: Pointer to the counter for printed characters
 */


void handle_unknown(const char *format, int *n_printed)
{
	_putchar('%', 1);
	_putchar(*format, 1);
	(*n_printed) += 2;
}
