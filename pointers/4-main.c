#include <stdio.h>

/**
 * main - storing the address of variable into a pointer
 *
 * Return: Always 0.
 */
int main(void)
{
	int n;
	int *p;

	n = 98;
	p = &n;
	
	printf("Address of 'n': %p\n", &n);
	printf("Address of 'p': %p\n", p);
	printf("=======\n");

	return (0);
}
