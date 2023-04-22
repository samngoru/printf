#include <stdarg.h>
#include "main.h"
/**
 * _printf - printing function
 * @format: variable
 * Return:count
 */
int _printf(const char *format, ...)
{
	char c, *s;
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
					c = va_arg(print, int);
					_putchar(c);
					count++;
					break;
				case 's':
					*s = va_arg(print, char*);
					_putchar(*s);
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
