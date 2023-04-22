#include <stdarg.h>
#include "main.h"
/**
 * _printf - printing function
 * @format: variable
 * Return:count
 */
int _printf(const char *format, ...)
{
	int count = 0;
	va_list print;

	va_start(print, format);
	while (*format)
	{
		if (*format == '%')
		{
			format++;
			switch (*format)
			{
				case 'c':
					_putchar(va_arg(print, int));
					count++;
					break;
				case 's':
					_putchar(str(va_arg(print, char*)));
					count++;
					break;
				case '%':
					_putchar('%');
					count++;
					break;
				default:
					_putchar(*format);
					break;
			}
		}
		else
		{
			_putchar(*format);
			count++;
		}
		format++;
	}
	va_end(print);
	return (count);
}
