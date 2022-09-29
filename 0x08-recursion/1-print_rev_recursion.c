#include "main.h"

/**
 * _print_rev_recursion - prints a string in reverse
 * @s: string to print passed as parameter
 */
void _print_rev_recursion(char *s)
{
	char *newLine = "\n";
	if (*s)
	{
		_print_rev_recursion(s + 1);
		_putchar(*s);
	}
	else
	{
		_putchar(*newLine);
		return;
	}
}
