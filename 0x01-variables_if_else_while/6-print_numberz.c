#include <stdio.h>
#include <unistd.h>
/**
 * main - Entry point
 * Description: prints all single digit numbers of base 10 starting from 0
 * Return: Always 0
 */
int main(void)
{
	int a;

	for (a = 0; a < 10; a++)
	{
		putchar('%d', a);
	}
	putchar('\n');
	return (0);
}
