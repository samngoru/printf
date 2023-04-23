#include <stdarg.h>
#include "main.h"
#include <stdlib.h>
/**
 * _printf - print output
 * @format: variable to be manipulated
 * Return: count
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list print;

	if (format != NULL)
	{
		va_start(print, format);
		while (format[i] != '\0')
		{
			if (format[i] != '%')
			{
				_putchar(format[i]);
				count = count + 1;
			}
			else
			{
			while (format[i] == '%')
			{
				if (format[i + 1] == 'c')
				{
					_putchar(va_arg(print, int));
					count = count + 1;
				}
				else if (format[i + 1] == 's')
				{
					_putchar(str(va_arg(print, char *)));
					count = count + 1;
				}
				else
				{
					_putchar(format[i + 1]);
					count = count + 1;
				}
				i++;
			}
			}
			i++;
		}
	}
	va_end(print);
	return (count);
}
