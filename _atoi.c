#include <stdio.h>

/**
 * factorial - calculates the factorial of a non-negative integer.
 * @n: The integer for which the factorial is to be calculated.
 *
 * Return: The factorial of n.
 */
unsigned long long factorial(int n)
{
	if (n < 0)
	{
	/* Factorial is not defined for negative numbers. */
	return (0);
	}
	else if (n == 0 || n == 1)
	{
	/* The factorial of 0 and 1 is 1.*/
	return (1);
	}
	else
	{
	/* Recursive calculation for positive integers.*/
	return (n * factorial(n - 1));
	}
}

int main(void)
{
	int n;

	printf("Enter a non-negative integer: ");
	scanf("%d", &n);

	unsigned long long result = factorial(n);

	printf("Factorial of %d is %llu\n", n, result);

	return (0);
}
