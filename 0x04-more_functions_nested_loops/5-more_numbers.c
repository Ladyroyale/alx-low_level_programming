#include "main.h"
/**
 * more_numbers - print more numbers
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 1; i <= 10; i++)
		_putchar (i + '0');

	for (j = 0; j <= 14; j++)
		_putchar(j);
	_putchar('\n');
}
