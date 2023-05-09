#include "main.h"
/**
 * print_binary - prints the binary representation of a number
 * @n: number to be manipulated
 */
void print_binary(unsigned long int n)
{
	int digit, count = 0;
	unsigned long int value;

	for (digit = 50; digit >= 0; digit--)
	{
		value >> digit;
		if (value & 1)
		{
			_putchar('1');
			count++;
		}
		else if (count)
			_putchar('0');
	}
	if (!count)
		_putchar('0');
}
