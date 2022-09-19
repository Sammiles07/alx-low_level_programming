#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string backwards
 * @str: string
 * Return: Always 0
 */

void print_rev(char *str)
{
	int i;

	i = 0;
	while (*str != '\0')
	{
		i++;
	}
	while (i >= 0)
	{
		_putchar(*str);
		i--;
	}
	_putchar('\n');
}
