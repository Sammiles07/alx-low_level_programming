#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i;
	char run;

	for (i = '0'; i <= '9'; i++)
		putchar(i);
	for (run = 'a'; run <= 'f'; run++)
		putchar(run);
	putchar('\n');

	return (0);
}
