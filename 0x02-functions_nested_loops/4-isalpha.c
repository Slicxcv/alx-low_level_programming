#include "main.h"
/**
 * _isalpha - checks for alphabetic characters
 * @c: is the int that will use for the argument of the function
 * Return: 0
 */
void _isalpha(int c)
{
	if ((c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z'))
	{
	return (1);
	}
	else
	return (0);
}
