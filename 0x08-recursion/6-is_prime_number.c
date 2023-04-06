#include "main.h"
/**
 * check_if_divisible - check the code
 *@n: parametre
 *@i: parametre
 * Return: Always 0.
 */
int check_if_divisible(int n, int i)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (check_if_divisible(n, i + 2));
}
/**
 * is_prime_number - check the code
 * @n: parametre
 * Return: always 0.
 */
int is_prime_number(int n)
{
	if (n < 2)
		return (0);
	else if (n == 2)
		return (1);
	else if (n % 2 == 0)
		return (0);
	return (check_if_divisible(n, 3));
}
