#include "main.h"
/**
 * binary_to_uint - converts a binary number to an unsigned integer
 * @b: pointer to a string of binary characters
 * Return: the converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int digit;
	unsigned int number = 0;

	if (!b)
		return (0);

	for (digit = 0; b[digit]; digit++)
	{
		if (b[digit] < '0' || b[digit] > '1')
			return (0);
		number = 2 * number + (b[digit] - '0');
	}

	return (number);
}
