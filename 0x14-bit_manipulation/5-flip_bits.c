#include "main.h"
/**
 * flip_bits - it flips to get from one number to another.
 * @n: is the first number
 * @m: is the second number
 * Return the number of bits you would need to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int diff, res;
	unsigned int a, i;

	a = 0;
	res = 1;
	diff = n ^ m;
	for (i = 0; i < (sizeof(unsigned long int) * 8); i++)
	{
		if (res == (diff & res))
			a++;
		result <<= 1;
	}

	return (a);
}
