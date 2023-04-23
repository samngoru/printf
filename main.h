#ifndef MAIN_H
#define MAIN_H
/**
 * struct print - prints structure that holds identidiers
 *
 * @c: character c
 * @s: string s
 *
 * Description: will be used to charck for identifiers
 */

typedef struct printi
{
	char c;
	char *s;
} printi;
int _putchar(char c);
int _printf(const char *format, ...);
int print_c(va_list args);
int print_s(va_list args);
int print_percent(va_list args);
int str(char *s);
#endif
