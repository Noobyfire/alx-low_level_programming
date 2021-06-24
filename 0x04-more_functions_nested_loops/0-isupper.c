#include "holberton.h"
#include <stdio.h>

/**
 * _isupper - functions that checks for uppercase
 * @c: is uppercase
 * Return: 1 if c is uppercase, 0 is otherwise
 */

int _isupper(int c)
{
if (c >= 'A' && c <= 'Z')
return (1);
else
return (0);
}
