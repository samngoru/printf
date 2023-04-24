#include <stdarg.h>
#include "main.h"
#include <stddef.h>
#include <stdlib.h>
/**
 * _printf - printing function
 * @format: variable
 * Return:count
 */
int _printf(const char *format, ...)
{
	int i = 0, count = 0;
	va_list print;

	va_start(print, format);
	if (format == NULL)
		return (-1);
	if (format != NULL)
		while (format[i] != '\0')
		{
			if (format[i] == '%')
			{
				format++;
				switch (format[i])
				{
					case 'c':
						count += print_char(print);
						break;
					case 's':
						count += print_string(print);
						break;
					case '%':
						count += _putchar(format[i]);
						break;
					default:
						_putchar('%');
						_putchar(format[i]);
						count += 2;
						break;
				}
			}
			else
			{
				count += _putchar(format[i]);
			}
			format++;
		}
		va_end(print);
		return (count);
	exit(1);
}
