#include <stdio.h>
/**
 * main - prints function of 50
 * Return:0 alaways
 */
int main(void)
{
	int count;

	unsigned long fib1 = 0, fib2 = 1, sum;

	for (count = 0; count < 50; count++)
	{
		sum = fib1 + fib2;
		printf("%lu", sum);
		printf(",");
		printf(" ");


		fib1 = fib2;
		fib2 = sum;

		if (count == 49)
			printf("\n");
	}
	return (0);
}
