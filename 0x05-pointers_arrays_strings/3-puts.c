#include "main.h"
/**
 * _puts - Prints a string
 * @str: string to print
 */
void _puts(char *str);
{
	int i;

	i = 0;
	while (str[i])
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}
