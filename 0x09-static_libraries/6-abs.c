#include <stdio.h>
#include "main.h"
/**
 * _abs - computes the absolute value of an integer
 * @c: Is the int that will use for the argument of the function
 * Return: Always 0
 */
int _abs(int c)
{
if (c > 0 || c == 0)
{
	return (c);
}
else
return (c * -1);
}
