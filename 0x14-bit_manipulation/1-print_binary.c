#include "main.h"
/**
 * _power - it calculates (base and power)
 * @base is base of the exponet
 * @pow is power of the exponet
 * Return: value of base and power
 */
unsigned long int _power(unsigned int base, unsigned int pow)
{
	unsigned long int num;
	unsigned int i;

	num = 1;
	for (i = 1; i <= pow; i++)
		num *= base;
	return (num);
}
/**
 * print_binary - It prints the binary representation of a number
 * @n is num of prented
 * Return: void
 */
void print_binary(unsigned long int n)
{
	unsigned long int dev, res;
	char flag;

	flag = 0;
	dev = _power(2, sizeof(unsigned long int) * 8 - 1);

	while (dev != 0)
	{
		res = n & dev;
		if (res == dev)
		{
			flag = 1;
			_putchar('1');

		}
		else if (flag == 1 || dev == 1)
		{
			_putchar('0');
		}
		dev >>= 1;
	}
}
