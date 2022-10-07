#include "main.h"

/**
 * swap_int - function that waps the values of two integers
 * @a: an integer to swap with another
 * @b: another integer to swap with an integer
 *
 * Return: Always 0
 */

void swap_int(int *a, int *b)
{
	int num1 = *a;
	int num2 = *b;

	*a = num2;
	*b = num1;
}
