#include "main.h"

/**
 * handle_decimal - Handle the 'd' format specifier
 *
 * @args: The args to be printed
 * @n_printed: Pointer to the counter for printed characters
 */




void handle_decimal(va_list args, int *n_printed)
{

	int n = va_arg(args, int), digit, i, num_digits = 0, temp;


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

	while (temp > 0)
	{
		temp /= 10;
		num_digits++;
	}

	while (num_digits > 0)
	{
		digit = n;
		for (i = 1; i < num_digits; i++)
			digit /= 10;
		_putchar(digit % 10 + '0', 1);
		(*n_printed)++;
		num_digits--;
	}



}
