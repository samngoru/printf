#include "main.h"
#include <stdlib.h>
#include <stdio.h>
#include <limits.h>
int main(void)
{
	_printf("Lets try ti print a simple statemet\n");
	_printf("character:[%c, %s]\n", 'C', "String");
	_printf("Character:[%c]\n", 'H');
	_printf("%%\n");
	_printf("Percent:[%%]\n");
	_printf("Unknown:[%r]\n");
	_printf("String:[%s]\n", "I am a string !");
	printf("\n");
    return (0);
}
