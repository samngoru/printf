#ifndef MAIN_H
#define MAIN_H
#include <stdarg.h>
#include <stddef.h>
/**
 * struct print - prints structure that holds identidiers
 *
 * @c: character c
 * @s: string s
 *
 * Description: will be used to charck for identifiers
 */

int _putchar(char c);
int _printf(const char *format, ...);
int print_char(va_list print);
int print_string(va_list print);
int print_percent(va_list print);
int str(char *s);
#endif
