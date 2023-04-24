#include "main.h"
#include <stdarg.h>
/**
 * print_char - prints character
 * @print: argument to be manipulated
 * Return: number of arguments
 */
int print_char(va_list print)
{
	return (_putchar(va_arg(print, int)));
}
/**
 * print_string - prints string
 * @print: argument
 * Return: number of arguments
 */
int print_string(va_list print)
{
	int i = 0, count = 0;
	char *str;

	str = va_arg(print, char*);
	if (str == NULL)
		str = "(null)";
	while (str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
		count++;
	}
	return (count);
}
