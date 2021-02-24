#include "holberton.h"

/**
 * recursion - imprime
 * @n: numero a imprimir
 * @cand_root: char
 * Return: Always 0
 */

int recursion(int n, int cand_root)
{
	int aux = cand_root * cand_root;

	if ((aux) < n)
		return (recursion(n, cand_root + 1));
	if (aux == n)
		return (cand_root);
	else
		return (-1);
}

/**
 * _sqrt_recursion - imprime
 * @n: numero a imprimir
 * Return: Always 0
 */

int _sqrt_recursion(int n)
{
	return (recursion(n, 0));
}
