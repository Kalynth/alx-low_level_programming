#include"main.h"
/**
 * get_bit - program returns the value of a bit at a given index.
 * @n: number to check bits
 * @index: index at which to check bits
 *
 * Return: value of the bit, or -1 if there is an error
 */
int get_bit(unsigned long int n, unsigned int index)
{
	unsigned long int jod, note;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	jod = 1 << index;
	note = n & jod;
	if (note == jod)
		return (1);
	return (0);
}
