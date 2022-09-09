#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)

{
	char run, e, q;

	e = 'e';
	q = 'q';

	for (run = 'a'; run <= 'z'; run++)
	{
		if (run != e && run != q)
			putchar(run);
	}
	putchar('\n');

	return (0);
}
