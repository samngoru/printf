#include "main.h"
/**
 * str - print string
 * @s:character to be printed
 * Return: 0
 */

int str(char *s)
{
	int i;

	for (i = 0; s[i] != '\0'; i++)
	{
		_putchar(s[i]);
	}
	return (0);
}
