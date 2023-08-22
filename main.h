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
void handle_string(const char *str, int *n_printed);
void handle_non_printable(const char str, int *n_printed);
void handle_character(va_list args, int *n_printed);
void handle_percent(int *n_printed);
void handle_unknown(const char *format, int *n_printed);
void handle_decimal(va_list args, int *n_printedn_printed);
void handle_int(va_list args, int *n_printedn_printed);
void handle_binary(va_list args, int *n_printedn_printed);
void nullable_string(char *str, int *n_printed);






#endif /*MAIN_MACRO*/
