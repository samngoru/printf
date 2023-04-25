#include "main.h"
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
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
/**
 * print_d - prints a decimal
 * @print: decimal argument
 * Return: counter
 */
int print_d(va_list print)
{

	unsigned int abs, a, num, count;
	int n;

	count = 0;
	n = va_arg(print, int);
		if (n < 0)
		{
			abs = (n * -1);
			count += _putchar('-');
		}
		else
			abs = n;

	a = abs;
	num = 1;
	while (a > 9)
	{
		a /= 10;
		num *= 10;
	}
	while (num >= 1)
	{
		count += _putchar((((abs / num)) % 10) + '0');
		num /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @print: integer argument
 * Return: the decimal function
 */

int print_i(va_list print)
{
	return (print_d(print));
}
