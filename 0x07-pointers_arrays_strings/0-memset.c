#include "main.h"

/**
 *_memset - fills memory with a constant byte.
 * @s: poiter to address to be filled.
 * @b: varriable containing value to fill s.
 * @n: index of s array.
 *
 * Return: Memory filled (s)
 */

char *_memset(char *s, char b, unsigned int n)

{
	s[n] = b;
	return (s);
}
