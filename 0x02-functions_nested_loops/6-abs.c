#include "holberton.h"

/**
 * _abs - computes the absolute value of an integer
 * @n: the value to be checked
 * Return: absolute value
 */
int _abs(int n)
{
if (n < 0)
{
return (n * -1);
}
return (n);
}
