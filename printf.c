#include <stdarg.h>
#include "main.h"
#include <stddef.h>
/**
 * _printf - printing function
 * @format: variable
 * Return:count
 */
int _printf(const char *format, ...)
{
	if (format != NULL)
	{
		int i = 0, count = 0;
		va_list print;

		va_start(print, format);

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
					case 'r':
						_putchar(format[i - 1]);
						_putchar(format[i]);
						break;
					default:
						count += _putchar(format[i]);
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
	}
	return (-1);
}
