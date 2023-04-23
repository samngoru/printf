#include <stdarg.h>
#include "main.h"
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
	while (format[i] != '\0')
	{
		if (format[i] == '%')
		{
			format++;
			switch (format[i])
			{
				case 'c':
					_putchar(va_arg(print, int));
					count = count + 1;
					break;
				case 's':
					_putchar(str(va_arg(print, char*)));
					count = count + 1;
					break;
				case '%':
					_putchar('%');
					count = count + 1;
					break;
				default:
					_putchar(format[i]);
					count = count + 1;
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
