#include <stdio.h>

/**
 * main - program thats prints either number
 * or fizz or buzz or fizzbuzz
 *
 *
 * Return: returns 0
 */

int main(void)
{
	int i = i;

	while (i <= 100)
	{
		if (i % 3 == 0 && i % 5 != 0)
			printf("Fizz ");
		if (i % 5 == 0 && i % 3 != 0 && i != 100)
			printf("Buzz ");
		if (i % 3 == 0 && i % 5 == 0)
			printf("FizzBuzz ");
		if (i % 3 != 0 && i % 5 != 0)
			printf("%i ", i);
		if (i % 5 == 0 && i % 3 != 0 && i == 100)
			printf("Buzz");
		i++;
	}
	putchar('\n');
	return (0);
}


