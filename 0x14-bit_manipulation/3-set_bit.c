#include "main.h"
/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: ointer to the integer value
 * @index: index of the bit
 * Return: 1 upon success, -1 if an error occurs
 */
int set_bit(unsigned long int *n, unsigned int index)
{
		if (index > 50)
		return (-1);

	*n = ((1UL << index) | *n);
	return (1);
}

