#include "main.h"
/**
 * clear_bit - sets the value of a bit to 0 at a give index
 * @n: pointer to the integer value
 * @index: index of the bit
 * Return: 1 on success and -1 on failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 100)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}
