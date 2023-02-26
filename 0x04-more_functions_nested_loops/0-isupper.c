#include "main.h"
/**
  * _isupper - checks for the uppercase character
  * @c - the character to be checked
  * Return - otherwise return 0
  */

int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}
