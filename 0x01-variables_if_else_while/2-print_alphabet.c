#include <stdio.h>
/**
  *main - Entry point
  *Decription - a program that prints small alphabetical letters
  *Return: 0
  */
int main(void)
{
	int n = 97;

	while (n <= 122)
	{
		putchar(n);
		n++;
	}
	putchar('\n');
	return (0);
}

