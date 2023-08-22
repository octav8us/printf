#include "main.h"

/**
 * handle_non_printable - Handle the nonprintable ascii codes
 *
 * @c: The char to be printed in hex code
 * @n_printed: Pointer to the counter for printed characters
 */
void handle_non_printable(char c, int *n_printed)
{
	    char hexDigit1, hexDigit2;


	    _putchar('\\', 1);
	    _putchar('x', 1);

	    hexDigit1 = ((unsigned char)c >> 4) & 0xF;
	if (hexDigit1 < 10)
	{
		_putchar(hexDigit1 + '0', 1);
	}
	else
	{
		_putchar(hexDigit1 - 10 + 'A', 1);
	}

	 hexDigit2 = (unsigned char)c & 0xF;
	if (hexDigit2 < 10)
	{
		_putchar(hexDigit2 + '0', 1);
	}
	else
	{
		_putchar(hexDigit2 - 10 + 'A', 1);
	}

	*n_printed += 4;
}
