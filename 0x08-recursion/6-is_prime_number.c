#include "main.h"
int prime(int n, int i);
/**
  * is_prime_number - check for a prime number
  * @n: the number to be checked
  *
  * Return: integer value
  */
int is_prime_number(int n)
{
	return (prime(n, 1));
}

/**
  * prime - Checks for prime numbers
  * @n: the number to be checked
  * @i: iteration
  * Return: 1 for prime and 0 otherwise
  */
int prime(int n, int i)
{
	if (n <= 1)
		return (0);

	if (n % i == 0 && i > 1)
		return (0);

	if ((n / i) < i)
		return (1);

	return (prime(n, i + 1));
}
