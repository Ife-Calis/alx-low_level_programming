#include <stdio.h>


/**
 *main - fund prints the numbers from 1-100, but for multiples of 5
 *prints Buzz each numbers of 3 and 5.
 *Return: Always 0.
 */

int main(void)
{

	int num;

	for (num = 1; num <= 100; num++)
	{
		if ((num % 3) == 0 && (num % 5) == 0)
			printf("FizzBuzz");

		else if ((num % 3) == 0)
			printf("Fizz");

		else if ((num % 5) == 0)
			printf("Buzz");

		else
			printf("%d", num);

		if (num == 100)
			continue;
		printf(" ");
	}

	printf("\n");

	return (0);
}

