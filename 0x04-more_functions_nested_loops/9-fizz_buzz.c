#include <stdio.h>

/**
 * main - fizz buzz application
 * Return: always 0
 */
int main(void)
{

	int i;

	for (i = 1; i <= 100; i++)
	{
		int fizz, buzz;

		if (i % 3 == 0)
			fizz = 1;
		else
			fizz = 0;

		if (i % 5 == 0)
			buzz = 1;
		else
			buzz = 0;

		if (fizz == 1 && buzz == 1)
			printf("FizzBuzz");
		else if (fizz == 1)
			printf("Fizz");
		else if (buzz == 1)
			printf("Buzz");
		else
			printf("%d", i);

		if (i < 100)
			printf (" ");
	}

	printf("\n");
	return (0);
}
