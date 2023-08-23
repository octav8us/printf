#include "main.h"
/**
 * nullable_string - handles nullable string with %s
 * @str: pointer to the str
 * @n_printed: pointer to the number of arguments printed
 */
void nullable_string(char *str, int *n_printed)
{
	if (str == NULL)
	{
		write(1, "(null)", 7);
		*n_printed += 7;
	}
	else
		handle_string(str, n_printed);
}
