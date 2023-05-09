#include "main.h"
/**
 * flip_bits - returns the number of bits required to flip
 * @n: first number
 * @m: second number
 * Return: number of bits
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
	{
	int i, bitcount = 0;
	unsigned long int bit;
	unsigned long int diff = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		bit = diff >> i;
		if (bit & 1)
			bitcount++;
	}

	return (bitcount);
}



