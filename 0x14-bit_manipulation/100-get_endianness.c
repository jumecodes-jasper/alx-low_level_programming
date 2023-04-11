#include "main.h"
/**
 * get_endianness: it checks the endianness
 *
 * Return: return 0 if big endian, return 1 if little endian
 */
int get_endianness(void)
{
	int a;
	char *c;

	a = 1;
	c = (char *)&a;

	return (*c);
}
