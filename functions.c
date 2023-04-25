#include "main.h"
#include <stdarg.h>
#include <limits.h>
#include <stdlib.h>
/**
 * print_char - prints character
 * @print: argument to be manipulated
 * Return: number of arguments
 er*/
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

	unsigned int absolute, aux, countnum, count;
	int n;

	count = 0;
	n = va_arg(print, int);
		if (n < 0)
		{
			absolute = (n * -1);
			count += _putchar('-');
		}
		else
			absolute = n;

	aux = absolute;
	countnum = 1;
	while (aux > 9)
	{
		aux /= 10;
		countnum *= 10;
	}
	while (countnum >= 1)
	{
		count += _putchar((((absolute / countnum)) % 10) + '0');
		countnum /= 10;
	}
	return (count);
}
/**
 * print_i - prints integer
 * @print: integer argumnt
 * Return: the decimal function
 */

int print_i(va_list print)
{
	return (print_d(print));
}
