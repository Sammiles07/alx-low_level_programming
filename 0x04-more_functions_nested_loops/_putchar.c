#include <unistd.h>
/**
 * putchar - prints char c to standard
 * output
 *
 * @c: the character to print
 *
 * Return: on Success 1
 * Return on error- -1
 */

int _putchar(char c)
{
	return(write(1, &c, 1));
}
