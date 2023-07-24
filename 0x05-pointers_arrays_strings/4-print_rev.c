#include "main.h"
/**
 * print_rev - Prints a string, in reverse
 * @s: string to print
 * Return: 0
 */
void print_rev(char *s)
{
	int i;

	i = 0;
		while (s[i])
		i++;
		while (i--)
		_putchar(s[i]);
		_putchar('\n');
}
