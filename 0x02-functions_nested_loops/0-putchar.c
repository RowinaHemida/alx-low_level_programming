#include "holberton.h"
/**
 * main
 * Return: 0 on success.
 */
int main(void)
{
	char *h = "Holberton\n";

	while (*h)
	{
		_putchar(*h);
		h++;
	}
	return (0);
}
