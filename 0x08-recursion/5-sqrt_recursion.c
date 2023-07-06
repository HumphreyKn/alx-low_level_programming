#include "main.h"

/**
 * _sqrt - function to gef the square root
 * @num: the number whose square root is being computed
 * @root: the root to be tested
 * Description: This function is used to check if the entered number has a
 * natural square root
 * Return: the square root if it has a natural square root, else -1
 */

int _sqrt(int num, int root)
{
	if ((root * root) == num)
	{
		return (root);
	}
	else if (root == num / 2)
	{
		return (-1);
	}
	else
	{
		return (_sqrt(num, root + 1));
	}
}

/**
 * _sqrt_recursion - returns the square root of a natural number
 * @n: the integer whose square root is being computed
 *
 * Return: natural square root of n, else -1
 */

int _sqrt_recursion(int n)
{
	int rt = 0;

	if (n < 0)
	{
		return (-1);
	}
	else if (n == 1)
	{
		return (1);
	}
	else
	{
		return (_sqrt(n, rt));
	}
}
