#include "main.h"
#include <stdarg.h>

/**
 * print_char - prints character
 * @args: argument
 * Return: number of arguments
 */
int print_char(va_list print)
{
	int c;

	c = va_arg(print, int);
	return (_putchar(c));
}
/**
 * print_string - prints string
 * @args: argument
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
