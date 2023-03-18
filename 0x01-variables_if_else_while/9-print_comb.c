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
	{
		putchar(i + '0');
		putchar(',');
		putchar(' ');
	}
	return (0);
}
