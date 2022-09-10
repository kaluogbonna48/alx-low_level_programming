#include <stdio.h>

/**
 * main - prints all the numbers of base 16 in lowercase,
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
	int num;
	char alphabets;

	for (num = 48; num < 58; num++)
	{
		putchar(num);
	}
	for (alphabets = 'a'; alphabets <= 'f'; alphabets++)
	{
		putchar(alphabets);
	}
	putchar('\n');
	return (0);
}
