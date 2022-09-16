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
			printf("%d FizzBuzz ", i);
		else if (fizz == 1)
			printf("%d Fizz ", i);
		else if (buzz == 1)
			printf("%d Buzz ", i);
		else
			printf("%d ", i);
	}

	printf("\n");

}
