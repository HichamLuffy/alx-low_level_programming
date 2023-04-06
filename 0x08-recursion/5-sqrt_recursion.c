#include "main.h"
/**
 * check - check the code
 *@a: parametre
 *@b: parametre
 * Return: Always 0.
 */
int check(int a, int b)
{
	if (a * a == b)
		return (a);
	if (a * a > b)
		return (-1);
	return (check(a + 1, b));
}
/**
 *_sqrt_recursion - check the code
 *@n: parametre
 * Return: always 0.
 */
int _sqrt_recursion(int n)
{
	if (n == 0)
		return (0);
	return (check(1, n));
}
