#include "main.h"

/**
  * swap_int - swaps the values of two integers
  *
  * temp - temporary variable to store the values of a and b
  * a - the first integer
  * b - the second integer
  *
  * Return: Always 0 (success)
  */

void swap_int(int *a, int *b)
{
	int temp = *a;
	*a = *b;
	*b = temp;
}
