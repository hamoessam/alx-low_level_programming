#include "main.h"
/**
 * print_alphabet - prints the english alphabet from a-z.
 * Return: Nothing.
 */
void print_alphabet(void)
{
	char alpha;

	for (alpha = 'a'; alpha <= 'z'; alpha++)
	{
		_putchar(alpha);
	}
	_putchar('\n');
}
