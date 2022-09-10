#include <stdio.h>
/**
 * main - main function entry point
 *
 * Return: 0
 *
 */
int main(void)
{
	int count = 1;
	int num1;
	int num2;
	
	for (num1 = 0; num1 <= 9; num1++)
	{
		for (num2 = count; num2 <= 9; num2++)
		{
			putchar(num1 + '0');
			putchar(num2 + '0');
			if (num1 == 8 && num2 == 9)
				continue;
			putchar(',');
			putchar(' ');
		}
	count++;
	}
	putchar('\n');
	return 0;
}
