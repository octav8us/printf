#include "main.h"




/**
 * handle_character - Handle the 'c' format specifier
 *
 * @ch: char to be handled
 * @n_printed: Pointer to the counter for printed characters
 */


void handle_character(const int ch, int *n_printed)
{

	if (!ch)
	{
		(*n_printed)++;
		return;


	}
	if (ch < 32 || ch >= 127)
	{
		handle_non_printable(ch, n_printed);
	}
	else
	{
		_putchar(ch, 1);
		(*n_printed)++;
	}
}
