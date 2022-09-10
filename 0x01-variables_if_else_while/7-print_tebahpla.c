#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char run;

	for (run = 'z'; run >= 'a'; run--)
		putchar(run);
	putchar('\n');

	return (0);
}
