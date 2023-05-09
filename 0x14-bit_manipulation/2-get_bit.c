#include "main.h"
/**
 * get_bit - returns the value of a bit at a given index
 * @n: the bit to be manipulated
 * @index: index of the bit
 * Return: value of the bit at index or -1 if an error occurs
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int value;

	if (index > 50)
		return (-1);

	value = (n >> index) & 1;

	return (value);
}
