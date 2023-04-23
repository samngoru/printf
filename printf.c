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
	if (*format)
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
						count += print_percent(print);
						break;
				}
			}
			else
			{
				_putchar(format[i]);
				count = count + 1;
			}
			format++;
		}
		va_end(print);
		return (count);
	}
	return (-1);
}
