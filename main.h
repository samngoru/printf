#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list print);
int print_string(va_list print);
int str(char *s);
int print_i(va_list print);
int print_d(va_list print);

#endif
