#include <limits.h>
#include "main.h"
#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0
 */
int main(void)
{
	int num = 0;

	_printf("Compiled!\n");
	_printf("%s\n", "Ama");
	_printf("%c\n", 'M');
	num = _printf("This is a very long string okay\n");
	printf("Num of args: %d\n", num);
	_printf("%%\n");
	_printf("%c %s %%\n", 'A', "combination");
	_printf("Error here: ");
	_printf("");
	return (0);
}
