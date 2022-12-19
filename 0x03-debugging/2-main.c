#include <stdio.h>
#include "main.h"

/**
* main - prints the largest of 3 integers
* Return: 0
*/

int main(void)
{
	int a, b, c;
	int largest;

	a = 10;
	b = 10;
	c = 10;

	largest = largest_number(a, b, c);
	if (largest == 0)
	{
		printf("a, b and c are the same!\n");
	}
	else
	{
	printf("%d is the largest number\n", largest);
	}
	return (0);
}
