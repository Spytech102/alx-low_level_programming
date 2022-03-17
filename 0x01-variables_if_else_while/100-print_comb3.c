#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int i, j;
	int n[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};

	for (i = 0; i < 10; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (n[i] < j)
			{
				putchar(n[i] + '0');
				putchar(j + '0');
				if ((i == 8) && (j == 9))
					break;
				putchar(',');
			y	putchar(' ');
			}
		}
	}
	return (0);
}
