#include "main.h"

/**
 * handle_binary - Handle the 'b' format specifier,print binary of int
 *
 * @args: The args to be printed
 * @n_printed: Pointer to the counter for printed characters
 */

void handle_binary(va_list args, int *n_printed)
{
	int n = va_arg(args, int), i,  temp;
	int binaryNum[32];

	if (n < 0)
	{
		_putchar('-', 1);
		(*n_printed)++;

		n = -n;
	}

	if (n == 0)
	{
		_putchar('0', 1);
		(*n_printed)++;

		return;
	}

	temp = n;

	i = 0;
	while (temp > 0)
	{
		binaryNum[i] = temp % 2;
		temp = temp / 2;
		i++;
	}

	for (i -= 1; i >= 0; i--)
	{
		_putchar('0' + binaryNum[i], 1);
		(*n_printed)++;

	}
}
