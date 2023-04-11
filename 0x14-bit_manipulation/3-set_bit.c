#include "main.h"

/**
 * set_bit - it's the value of a bit to 1 at a given index.
 * @index: beginning from 0 of the bit you want to set
 * @n: it's pointer number of a
 * Return 1 if it worked, or -1 if an error occurred
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int a;

	if (index > (sizeof(unsigned long int) * 8 - 1))
		return (-1);
	a = 1 << index;
	*n = *n | a;

	return (1);
}
