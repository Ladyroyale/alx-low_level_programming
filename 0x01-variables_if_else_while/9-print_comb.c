#include <stdio.h>
/**
 * main - print combo
 *
 * Return: 0 alaways (sucess)
 */
int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
		if (i == 9)
			putchar(i + '0');
		else
		{
			putchar(i + '0');
			putchar(',');
			putchar(' ');
		}
	return (0);
}
