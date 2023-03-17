#include <stdio.h>
#include <unistd.h>

/**
 * main - print without using printf or puts function
 *
 * Return: 1 always when successful
 */

int main(void)
{
	fputs("and that piece of art is useful\" - Dora Korpar, 2015-10-19\n", stdout);
	return (1);
}
