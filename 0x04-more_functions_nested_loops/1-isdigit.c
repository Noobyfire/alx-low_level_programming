#include "holberton.h"

/**
 * _isdigit - checks for a digit
 * @c: is a digit
 * Return: 1 is a digit, 0 otherwise
 */

int _isdigit(int c)
{
if (c >= '0' && c <= '9')
return (1);
else
return (0);
}
