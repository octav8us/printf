#include "main.h"


/**
 * handle_percent - Handle the '%' format specifier
 *
 * @n_printed: Pointer to the counter for printed characters
 */
void handle_percent(int *n_printed)
{
	_putchar('%', 1);
	(*n_printed)++;

}
