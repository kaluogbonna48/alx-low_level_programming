<<<<<<< HEAD
#include <stdio.h>
/**
 * main - main function entry point
 *
 * Return: 0
 *
 */
int main(void)
{
      int num;
      for (num = 0; num <= 9; num++)
	{
        putchar(num + '0');
        if (num == 9)
            continue;
        putchar(',');
        putchar(' ');
	}
      putchar('\n');
      return (0);
=======
#include <unistd.h>

/**
 * main - Entry point
 *
 *
 * Return: Always 0
 */
int main(void)
{
	int num;
    	for (num = 0; num <= 9; num++)
    	{
        	putchar(num + '0');
        	if (num == 9)
            		continue;
        	putchar(',');
        	putchar(' ');
    	}
    	putchar('\n');
    	return 0;
>>>>>>> 0f238c9155752ccec2194e3b4b4c360f2b61ae6f
}
