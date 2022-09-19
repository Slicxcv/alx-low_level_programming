#include <stdio.h>
#include "main.h"
/**
 * main - checks the code
 * Return: 0
 */
int main(void)
{
	int n;
	
	int n = 98;
	int *ip;

	ip = &n;
	
	printf("The value of n: %d\n", *ip);
	
	return (0);
}
