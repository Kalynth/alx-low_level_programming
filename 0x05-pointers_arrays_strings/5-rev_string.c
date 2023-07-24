#include "main.h"

/**
 * rev_string - Reverses a string
 * @s: Input string
 * Return: String in reverse
 */

void rev_string(char *s)
{
	char rev = s[0];
	int cunt = 0;
	int i;

	while (s[cunt] != '\0')
	cunt++;
	for (i = 0; i < cunt; i++)
	{
		cunt--;
		rev = s[i];
		s[i] = s[cunt];
		s[cunt] = rev;
	}
}

