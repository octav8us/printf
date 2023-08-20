#ifndef PUTCHAR
#define PUTCHAR

#include "main.h"
/**
 * _putchar - writes a char to stdout
 * @data: the char to be written
 * @size: number of bytes
 *
 * Return: 1 (success)
 * or 0 (error) and specefy errno
 */
int _putchar(char data, size_t size)
{
	/*size_t size = strlen(data);*/

	/*No buffer handling*/
	/*write(int fd, const void *buf, size_t count)*/
	return (write(1, &data, size));
}
#endif /*PUTCHAR*/
