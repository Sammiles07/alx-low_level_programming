#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 * Return: Always 0 (Success)
 */

int main(void)
{
	char heart;

		for (heart = 'a'; heart <= 'z'; heart++)
			putchar(heart);
	putchar('\n');
	return (0);
}
