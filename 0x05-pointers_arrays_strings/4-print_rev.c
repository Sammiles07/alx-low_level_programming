#include "main.h"
#include <stdio.h>

/**
 * print_rev - prints string backwards
 * @s: string
 * Return: Always 0
 */

void print_rev(char *s)
{
	int i;

	i = 0;
	while (s[i] != '\0')
	{
		i++;
	}
	i--;
	while (i >= 0)
	{
		_putchar(s[i]);
		i--;
	}
	_putchar('\n');
}
