#ifndef MAIN_MACRO
#define MAIN_MACRO

/*Header files*/
#include <unistd.h>
#include <stdarg.h>
#include <stddef.h>
#include <string.h>

/*--> TOOLS <--*/
int _putchar(char data, size_t size);
void formatsp(const char *format, va_list args, int *n_printed);

/*--> FUNCTION PROTOTYPES <--*/
int _printf(const char *format, ...);

#endif /*MAIN_MACRO*/
