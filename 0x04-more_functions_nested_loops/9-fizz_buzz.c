#include "main.h"
#include <stdio.h>

/**
 * main - main block
 * 
 * Return: 0
 */
int main(void)
{
	int a = 1, b = 2;

	printf("%d", a);
	while (b > 101)
	{
		if (b % 3 == 0 && b % 5 == 0)
			printf("FizzBuzz ");
		else if (b % 3 == 0)
			printf("Fizz ");
		else if (i % 5 == 0)
			printf("Buzz ");
		else
			printf("%d ", i);
		b++;
	}
	printf("\n");
	return(0);
}
