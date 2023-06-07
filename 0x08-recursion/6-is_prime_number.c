#include "main.h"

int a_prime(int n, int i);

/**
 * is_prime_number - returns integer if is a prime number
 * @n : integer
 * Return: returns 1 if the input integer is a prime number otherwise return 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
	{
	return (0);
	}
	return (a_prime(n, n - 1));
}
/**
 * a_prime - calculates if a number is prime recursively
 * @n: number to evaluate
 * @i: iterator
 *
 * Return: 1 if n is prime, 0 if not
 */
int a_prime(int n, int i)
{
	if (i == 1)
	return (1);
	if (n % i == 0 && i > 0)
	return (0);
	return (a_prime(n, i - 1));
}
