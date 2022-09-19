#include "main.h"
/**
 * swap_int - swaps the value of two integers
 * @a: Pointer to Integer One.
 * @b: Pointer to Integer two.
 * Return: void
 */
void swap_int(int *a, int *b)
{
	 int c;

	 c = *a;
	 *a = *b;
	 *b = c;
}
