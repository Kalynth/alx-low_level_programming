#include "main.h"

/**
 * get_endianness - prog checks the endianness
 * Return: 0 if big endianess, 1 if little endianess
 */
int get_endianness(void)
{
	int k;
	char *a;

	k = 1;
	a = (char *)&k;
	return (*a);
}
